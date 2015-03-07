/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com) and Kavita Arora (kklindor21[at]gmail[dot]com)
 *  Date  : 03-06-2015 17:55
 *
 *  Module Number: M04  
 *  Module Title:  Arduino Outputs
 *
 *  Module Statement: Interface your Arduino to an RGB LED and make colours of the LED fade. 
 *
 *  Minimum Requirements: Get 2 colours of the LED to fade across (One colour should go from low to high, while another colour should go from high to low) 
 *
 *  Learning Objectives: 
 *  •  Understand how to write a few lines of Arduino code
 *  •  Understand breadboarding basics 
 *  •  Interface an Output Device (RGB LED) to Arduino
 *  •  Understand how to reuse previously written code and modify it as per your requirements
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
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
*/

/* Software Includes */

/* Global Defines */

/* Global Variables */

/* Global Function Declearation */

void setup() {
  // Add your Initialization code here : Code written here will only run once
}

void loop() {
  // Add your fade code here : Code written here will run forever
}

/* 
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
 *  Gurinder Singh Gill  BMOSC LABS
*/

/*
 *  To program your arduino, we have to first set up which Arduino are we using. 
 *  STEP 1 : Select your Arduino by clicking on : Tools > Board > Arduino Uno
 *  STEP 2 : Select the Port on which your arduino is connected to by selecting : Tools > Port > COM6
 *  STEP 3 : Click the checkmark symbol [Verify] on the top left hand corner of this window to verify that the code has no errors
 *  STEP 4 : Click the Right Arrow symbol (->) [Upload] to upload this program to your Arduino 
 *           (You can see the status below as well as the flashing lights on your arduino)
*/
