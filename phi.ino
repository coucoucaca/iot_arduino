
//iitialize the array size
const int led_number=6;
//each array item  is a pin on the board
int pinLeds[led_number] = {D2,D3,D4,D5,D6,D7};
//initialize the button pin
//button is not pressed initially
const int pin_button = D1;
bool button_on = false;

void setup() {

  // put your setup code here, to run once:
  //serial baud rate
  Serial.begin(9600);
  //set mode and stste for each pin
  for (int i = 0; i< led_number; i++) {
    pinMode(pinLeds[i],OUTPUT);
    digitalWrite(pinLeds[i],LOW);
  }
   
  //set the button pin mode to input
  pinMode(pin_button,INPUT);


}



void loop() {
  // put your main code here, to run repeatedly:
  

  //turn on off the each led  in turn
  if(isButton_on() == true) 
  {
  Serial.println("On");
    
  for (int i = 0; i< led_number; i++) 
    {

    digitalWrite(pinLeds[i],HIGH);
    //print the pin number
    Serial.println(i);

    delay(100);

    digitalWrite(pinLeds[i],LOW);

   } // end of for loop


  } else {
  Serial.println("Off");
  for (int i = 0; i< led_number; i++) {
   
    digitalWrite(pinLeds[i],LOW);
  
   } // end of for loop
  
  }
  
}// end of loop



bool isButton_on() {

  if(digitalRead(pin_button) == 1 ){

    button_on= true;

  } else {

    button_on= false;

  }

 return button_on; 
  
}
