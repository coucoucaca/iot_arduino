//assign pins and variables
const int switch_pin = D1;//  D1 pin to read the SIG from the switch

const int led_pin = D2;
int switch_value;

const int potentiometer_pin = A0; // A0 pin ( analog) for potatiometer SIG
int potValue;

//imitialize temperature
int minTemp = -2;
int maxTemp = 6;

int brightness_val;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin, OUTPUT);
  pinMode(switch_pin, INPUT);
  pinMode(potentiometer_pin, INPUT);

  //Start the serial to debug values
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  //if the fridge is on, turn on the temperature

  if(fridgeOn()) {

    Serial.println("Fridge ON");
    delay(200);
    Serial.println(fridgeTemperature());
    delay(200);
    // Serial.println(analogRead(potentiometer_pin));
    // delay(200);
    // Serial.println(brighteness());
    
    delay(200);
  }  else  {
    
    Serial.println("Fridge OFF");
    potValue=analogRead(potentiometer_pin);
    brightness_val = map(potValue,0,1023,0,255);
    analogWrite(led_pin, brightness_val);

  }


}


bool fridgeOn() {
  //check if switch is on
  switch_value = digitalRead(switch_pin);
  if(switch_value == 0) {

    return false;

  } return true;

}

int fridgeTemperature() {

  potValue = analogRead(potentiometer_pin);
  //map to the voltage range(0- 1023 which is the resolution of the MC) to min and max temp

  // potValue= map(potValue, 0, 1023, minTemp, maxTemp); //5 args
  return potValue;

}


