/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com) and Kavita Arora (kklindor21[at]gmail[dot]com)
 *  Date  : 03-06-2015 17:56
 *
 *  Module Number: M04  
 *  Module Title:  Arduino Outputs
 *
 *  Module Statement: Interface your Arduino to an RGB Led and make colours of the LED fade. 
 *
 *  Minimum Requirements: Get 2 Colours of the LED to fade across (One colour should go from high to low, the other colour should go from low to high) 
 *
 *  Learning Objectives: 
 *  •  Understand how to write Arduino code
 *  •  Understand breadboarding basics 
 *  •  Interface an Output Device (RGB LED) to Arduino
 *  •  Understanding how to reuse previously written code and modify it as per your requirements
 *
 *  Hardware Requirements:
 *  •  Arduino Uno
 *  •  Breadboard
 *  •  A RGB LED, 100 Ohm Resistor, 330 Ohm Resistor, 470 Ohm Resistor
 *
 *  Hardware Connections:
 *  [Arduino_Pin_9]------[Resistor1- 470 Ohm]-----------[RED_LED-]
 *  [Arduino_Pin_10]------[Resistor2 - 330 Ohm]-----------[GREEN_LED-]
 *  [Arduino_Pin_11]------[Resistor3 - 100 Ohm]-----------[BLUE_LED-]
 *  [LED+]-------[Arduino_5/3.3V_Pin]
 *
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and Open Source Creativity
*/

/* Software Includes */

/* Global Defines */

/* Global Variables */
int ctr;          // counter for fading

/* Global Function Declearation */

void setup() {
  pinMode(9, OUTPUT);             // Making GPIO Pin9(LED) as an Output Pin
  pinMode(10, OUTPUT);            // Making GPIO Pin10(LED) as an Output Pin
  pinMode(11, OUTPUT);            // Making GPIO Pin11(LED) as an Output Pin
}

void loop() {
  
  for(ctr = 0; ctr <= 255 ; ctr++){     // Loop for fading GREEN LED from dim to bright and BLUE LED from bright to dim
    analogWrite(10,ctr);                 // writing analog voltages to GREEN LED based on loop above
    analogWrite(11,(255-ctr));          // writing Max-Current analog voltages to BLUE LED based on loop above
    delay(30);                            // delay to prolong the fade effect
  }
  for(ctr = 255; ctr >= 0 ; --ctr){     // Loop for fading BLUE LED from dim to bright and GREEN LED from bright to dim
    analogWrite(10,ctr);                 // writing analog voltages to GREEN LED based on loop above
    analogWrite(11,(255-ctr));          // writing Max-Current analog voltages to BLUE LED based on loop above
    delay(30);                            // delay to prolong the fade effect
  }
}

/* 
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
 *  Gurinder Singh Gill + Kavita Arora [BMOSC LABS]
*/

/*
 *  To program your arduino, we have to first set up which Arduino are we using. 
 *  STEP 1 : Select your Arduino by clicking on : Tools > Board > Arduino Uno
 *  STEP 2 : Select the Port on which your arduino is connected to by selecting : Tools > Port > COM6
 *  STEP 3 : Click the checkmark symbol [Verify] on the top left corner to verify that the code has no errors
 *  STEP 4 : Click on the Right Arrow symbol (->) [Upload] to program your Arduino 
 *           (You can see the execution status in the Status Bar below as well as the flashing lights on your arduino)
*/
