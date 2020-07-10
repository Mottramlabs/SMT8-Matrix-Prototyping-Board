/*
  Title:        Simple Hello World Demo, LED Flash
  Date:         10th July 2020
  Author:       David Mottram
  Board:        STM8S103F3 Breakout Board
  Programmer:   ST-Link/V2.1
*/

#define LED PB5

void setup() {

  // set LED pin as an output
  pinMode(LED, OUTPUT) ;
  // LED off, high=off low=on
  digitalWrite(LED, HIGH);

} // end setup

void loop() {

  // flash 4 times
  for (int zz = 0; zz < 4; zz++) {

    // LED on, high=off low=on
    digitalWrite(LED, LOW);
    delay(10);

    // LED off, high=off low=on
    digitalWrite(LED, HIGH);
    delay(200);

  } // end if

  delay(1000);

} // end loop
