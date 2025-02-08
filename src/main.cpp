#include <Arduino.h>
#define RED_LED 16
#define GREEN_LED 16

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED,OUTPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED_LED, HIGH);
  delay(1000);
  digitalWrite(RED_LED, LOW);
  delay(1000);
  digitalWrite(GREEN_LED, HIGH);
  delay(1000);
  digitalWrite(GREEN_LED, LOW);
  delay(1000);
}
