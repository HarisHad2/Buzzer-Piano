#include <Arduino.h>
#define Pressed LOW
#define T_C 262

const int Buzzer = 11;
const int LED = 13;

const int BUTTON_C = 8;

void setup() {
 Serial.begin(9600);
  pinMode(LED, OUTPUT);
  
  pinMode(BUTTON_C, INPUT);
  digitalWrite(BUTTON_C,HIGH);
  
  digitalWrite(LED,LOW);
}
void loop() {
    while(digitalRead(BUTTON_C) == Pressed)
  {
    tone(Buzzer,T_C);
    digitalWrite(LED,HIGH);
  }
  
  noTone(Buzzer);
  digitalWrite(LED,LOW);
}
