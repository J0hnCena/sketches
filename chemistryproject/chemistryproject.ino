#include <Servo.h>
#include "pt.h"

Servo needleServo;
const int buttonPin = 2;
const int ledPin = 13;
int buttonState = 0;
boolean buttonWasPressed = false;
static struct pt servopt;

void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  needleServo.attach(9);
  PT_INIT(&servopt); 
}

static int servoProtoThread(struct pt *pt, int wait)
{
  int timestamp = 0;
  PT_BEGIN(pt);
  int pos;
  for(pos = 0;pos < 180; pos++) {
    needleServo.write(pos);
    PT_WAIT_UNTIL(pt, millis() - timestamp > wait);
    timestamp = millis();
  }
  PT_END(pt);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  
  if(buttonState == LOW) {
    buttonWasPressed = true;
  }
  digitalWrite(ledPin, LOW);
  if(buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    servoProtoThread(&servopt, 15);
  } else {
    digitalWrite(ledPin, LOW);
    needleServo.write(180);
  }
  delay(10);
  
}
