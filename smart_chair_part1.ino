//assign digital pins
const int red_led_pin= D2;
const int green_led_pin = D3;
const int blue_led_pin = D4;
const int touch_sensor= D5;

//analog pin
const int photo_sensor= A0;

// initial values for variables
int chair_busy;

int photoValue = 0;
int photoThreshold = 550;



void setup() {

  // put your setup code here, to run once:
  //set LED as INPUT
  pinMode(red_led_pin,OUTPUT);
  pinMode(green_led_pin,OUTPUT);
  pinMode(blue_led_pin,OUTPUT);
  //SET sendors as INPUT
  pinMode(touch_sensor,INPUT);
  pinMode(photo_sensor,INPUT);

//start the serial to debug
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ////////original
  if(isNight()) {

    lightShow();//cycles RGB
    
  } else {

    chairSignal();
  }

 ///////for test signal
  // chairSignal();
}

void rgbLed(int red_led_amount, int green_led_amount, int blue_led_amount) {
  //parameters 0-255
  analogWrite(red_led_pin, red_led_amount);
  analogWrite(green_led_pin, green_led_amount);
  analogWrite(blue_led_pin, blue_led_amount);
}


void chairSignal() {


  chair_busy = digitalRead(touch_sensor);//0 or 1
  Serial.println(chair_busy);

  if(chair_busy) {
    rgbLed(255,0,0);
  } else {
    rgbLed(0,255,0);
  }


}

bool isNight() {

  photoValue = analogRead(photo_sensor);
   //A0 photoregister value 0-2023

  Serial.println(photoValue);

  if(photoValue > photoThreshold) {
    Serial.println("Day");
    return false;
  } 
  Serial.println("Night");
  return true;

}



void lightShow() {

  rgbLed(255,0,0);
  delay(500);
  rgbLed(0,255,0);
  delay(500);
  rgbLed(0,20,255);
  delay(500);

}
