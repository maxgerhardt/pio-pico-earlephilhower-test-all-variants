#include <Arduino.h>

#if !defined(LED_BUILTIN)
#define LED_BUILTIN 13
#warning "This board does not have LED_BUILTIN defined, using default."
#endif

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  Serial.println("hello, world!");
}
