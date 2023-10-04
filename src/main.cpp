// Cameron Schwartzberg
// 10 - 04 - 2023
// Mini-Bot Main File



#include <Arduino.h>
#include "RoboClaw.h"


#include "Setup.h"
#include "motorMovementBasic.h"

// Global constant Motor A connections
const short int en1A = 0;           // Make sure to change to correct pin
const short int in1 = 4;              // Make sure to change to correct pin
const short int in2 = 16;            // Make sure to change to correct pin

// Global constant Motor B connections
const short int en1B = 18;           // Make sure to change to correct pin
const short int in3 = 17;            // Make sure to change to correct pin
const short int in4 = 5;            // Make sure to change to correct pin

// Global constant Motor A connections
const short int en2A = 32;           // Make sure to change to correct pin
const short int in5 = 33;              // Make sure to change to correct pin
const short int in6 = 25;            // Make sure to change to correct pin

// Global constant Motor B connections
const short int en2B = 14;           // Make sure to change to correct pin
const short int in7 = 26;            // Make sure to change to correct pin
const short int in8 = 27;            // Make sure to change to correct pin


void setup() {
    motorSetup(in1, in2, in3, in4, en1A, en1B);
    motorSetup(in5, in6, in7, in8, en2A, en2B);
}

void loop() {
    setup();

    motorsForwardOn(in1, in2, in3, in4);
    motorsForwardOn(in5, in6, in7, in8);
}