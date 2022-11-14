#include <Arduino.h>

// How this works:
//   I used to use a digital out to control stuff.  However, with the current wiring, its not needed
//   All that I rely on is sending 3v signal to the input of the other microcontroller.  This will
//   happen as soon as this device gets powered on, so there is no need to have any logic at all.
//
//   BUST -> Switches 120v ON -> Powers on 5v Adapter to power Arduino -> Sends 3v out is 3v line -> Triggers logic in main

void setup() {
  Serial.begin(9600);
  Serial.println("Bust-opener by kevinc");
}

void loop() {
}