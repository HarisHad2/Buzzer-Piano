#include <Arduino.h>
#define Pressed LOW
#define T_C 262

const int PIEZO = 11;
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
    tone(PIEZO,T_C);
    digitalWrite(LED,HIGH);
  }
  
  noTone(PIEZO);
  digitalWrite(LED,LOW);
}
