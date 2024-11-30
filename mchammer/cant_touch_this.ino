#include <LiquidCrystal.h>
#include "pitches.h"

LiquidCrystal lcd(12,11,5,4,3,2); // pins on LCD d0, d1, d2, d3, d4, d5, d6, d7 4-7 required

const int switchPin=6;// capacitative touch

int switchState= 0;
int prevSwitchState =0;
int reply;

int buzzer_pin = 8;

  //music scores

  int melody_cant[] = {
    NOTE_D4, NOTE_C4, NOTE_B3, NOTE_A3,0,0, NOTE_E3, NOTE_G3, 0,0, NOTE_B3,NOTE_A3,0,0
  };

  int m_size_cant = sizeof(melody_cant) / sizeof(melody_cant[0]);

  int melody_oh[] = {
    NOTE_A3, 
    NOTE_C4, 
    NOTE_D4, 
    NOTE_E4, 
    NOTE_D4, 
    NOTE_C4, 
    NOTE_A3,
    NOTE_G3,
  
    NOTE_A3,
    0,0,0,0,0,0,
    NOTE_G3,
    NOTE_A3
  };
   int m_size_oh = sizeof(melody_oh) / sizeof(melody_oh[0]);
   

  // note durations: 4 = quarter note, 8 = eighth note, etc.:
  // int noteDurations[] = {
  //   4, 8, 8, 8, 8, 8, 8,8, 8,8,8,8 , 8,8,8
  // };

  int noteDurations_cant[] = {
    4, 8, 8, 8, 8, 8, 8,8, 8,8,8,8 
  };

  int n_size_cant = sizeof(noteDurations_cant) / sizeof(noteDurations_cant[0]);

//oh oh oh oh
  int noteDurations_oh[] = {
    4, 4,4,4,4,4,4,4,8, 
    8, 8,8,8,8,8, 4,4
  };


 int n_size_oh= sizeof(noteDurations_oh) / sizeof(noteDurations_oh[0]);



void setup() {
    Serial.begin(9600);
    lcd.begin(16,2); //lcd.begin(cols, rows, charsize)
    pinMode(switchPin, INPUT);
    lcd.setCursor(0,0);
    lcd.print("Can't Touch this!");
    // lcd.setCursor(0,1);
    // lcd.print("Touch");
Serial.println( m_size_oh);
      Serial.println(n_size_oh);

}

void loop() {
  // check if touched
  switchState =digitalRead(switchPin);//LOW Or HIGH
  if(switchState == HIGH) {
    delay(500);

    int counterCant=2;
    while (counterCant > 0) {
        lcd.clear();
        lcd.setCursor(0,1);      
        lcd.print("Can't Touch This");
        playMelody(melody_cant, m_size_cant, noteDurations_cant, n_size_cant);    
        delay(1000);  
        lcd.clear();
        counterCant = counterCant - 1;
        }
   
    lcd.setCursor(0,1);      
    lcd.print("Break it down!");
    delay(1500);  
    lcd.clear();

     int counterOh=2;
        while (counterOh > 0) {
       
        lcd.setCursor(0,0);      
        lcd.print("Oh Oh Oh Oh");
        lcd.setCursor(0,1);      
        lcd.print("Oh Oh Oh Oh ...");  
        playMelody(melody_oh, m_size_oh, noteDurations_oh, n_size_oh);  
       
        delay(1000);  
        lcd.clear();
        counterOh = counterOh - 1;
        }

        
    lcd.setCursor(0,0);      
    lcd.print("Stop,");
    lcd.setCursor(0,1);      
    lcd.print("Hammer Time!");
    delay(2000);  
    

    switchState = LOW;
    }

}


void playMelody( int melody[], int m_size, int noteDurations[], int n_size  ) {



  int arraySize = n_size;
  Serial.println(n_size);

  for (int thisNote = 0; thisNote < arraySize ; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzzer_pin, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzer_pin);
  }
}
