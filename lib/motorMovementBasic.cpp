// Cameron Schwartzberg
// 9/16/2023, 1:58 PM
// Mini-Bot-and-Motor-Testing
// Functions for basic motor movement
// (Contributors)

#include <stdio.h>

#include "Arduino.h"
#include "RoboClaw.h"

// Turn motors on in forward direction
void motorsForwardOn(short int x1, short int x2, short int x3, short int x4){
    digitalWrite(x1, HIGH);
    digitalWrite(x2, LOW);
    digitalWrite(x3, HIGH);
    digitalWrite(x4, LOW);
}

// Turn motors on in the reverse direction
void motorsReverseOn(short int x1, short int x2, short int x3, short int x4){
    digitalWrite(x1, LOW);
    digitalWrite(x2, HIGH);
    digitalWrite(x3, LOW);
    digitalWrite(x4, HIGH);
}

void motorsOff(short int x1, short int x2, short int x3, short int x4){
    digitalWrite(x1, LOW);
    digitalWrite(x2, LOW);
    digitalWrite(x3, LOW);
    digitalWrite(x4, LOW);
}