// Cameron Schwartzberg
// 09-16-2023
// Setup File function

#include <stdio.h>
#include "Arduino.h"


void motorSetup(short int x1, short int x2, short int x3, short int x4, short int yA, short int yB){
    // pinModes for setting up motors
    pinMode(yA, OUTPUT);
    pinMode(yB, OUTPUT);
    pinMode(x1, OUTPUT);
    pinMode(x2, OUTPUT);
    pinMode(x3, OUTPUT);
    pinMode(x4, OUTPUT);

    // Set motors to initial state
    // Initial state == OFF
    digitalWrite(x1, LOW);
    digitalWrite(x2, LOW);
    digitalWrite(x3, LOW);
    digitalWrite(x4, LOW);
}