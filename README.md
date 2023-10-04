# PlatformIO
The "Embedded Software Development" tool
https://platformio.org/

This needs to be installed on your IDE of choice in order to upload to the ESP-32.
Currently we are using an ESP-32 not directly listed in their choices so we will use the next closest which is
 > Espressif ESP32 Dev Module (ESP32, 240MHz, ROM: 4M, RAM 320K)
   ⚙︎ arduino <--- USE THIS ONE FOR NOW
   ⚙︎ espresif (something like this)

There are also like a million different things we can do with this tool and specifically for the ESP-32 we are using, so I will link to the documentation page for later user: https://docs.platformio.org/en/latest/platforms/espressif32.html#tutorials

# Mini-Bot
Mini-Bot Testing code is to be used for the inital Mini-Bot to test the functionality of our program. Along with optimizing it to run smoothly on the ESP-32. The functionality should include:
- Motor movement and directionality
- Steering (done by a servo)
- Speed control
- Specific motor control

# Libraries

  # Large Libraries

- Arduino.h

   - This is the basic arduino library for use of basic functions built into the library.

- Roboclaw.h
  
   - This is used for the motor controllers. Most of the needed functions for controlling the motors will be in here.

  # Homemade Libraries

- Setup.h
  
   - This is to clean up our setup function inside of main. This houses all of the needed functions to setup the motors, servos, etc. to get ready to control them, and set them to their initial state.

- motorMovementsBasic.h
  
   - This will house all of our simply motor commands (i.e. All forward, all reverse, all stop). 

- motorMovementAdvanced.h
   
   - WIP

- steering.h

  - WIP

- controlSystem.h

  - WIP

# Uploading to ESP-32
  For now we will just simply use the upload function (TBD if this works if it doesn't we will look into the way specified on the page)

# Pin-out
  (Include image of ESP-32 Pinout as read now)
