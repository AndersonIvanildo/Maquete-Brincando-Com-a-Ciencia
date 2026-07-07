#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  Serial.println("Projeto Iniciado!");
  pinMode(LED_BUILTIN, INPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
