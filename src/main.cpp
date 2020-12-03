#include <Arduino.h>
#define T_C 262

const int C = 7;

const int Buzz = 2;


void setup() {
  // put your setup code here, to run once:
  pinMode(C,INPUT);
  // digitalWrite(C,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(C) == LOW)
  {
    Serial.println("Push");
    //tone(Buzz,T_C);
  } else {
    Serial.println("off");
  }
  delay(100);
}