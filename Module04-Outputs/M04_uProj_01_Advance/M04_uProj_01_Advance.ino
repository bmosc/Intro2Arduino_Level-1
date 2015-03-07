/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com) and Kavita Arora (kklindor21[at]gmail[dot]com
 *  Date  : 03-06-2015 17:55
 *
 *  Module Number: M04  
 *  Module Title:  Arduino Outputs
 *
 *  Module Statement: Interface your Arduino to an RGB LED and make colours of the LED fade randomly. 
 *
 *  Learning Objectives: 
 *  •  Understand how to write Arduino code
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
 *  [Arduino_Pin_10]------[Resistor1 - 330 Ohm]-----------[GREEN_LED-]
 *  [Arduino_Pin_11]------[Resistor1 - 100 Ohm]-----------[BLUE_LED-]
 *  [LED+]-------[Arduino_5/3.3V_Pin]
 *
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and Open Source Creativity
*/

/* Software Includes */

/* Global Defines */

/* Global Variables */

/* Global Function Declearation */

void setup() {
  pinMode(9, OUTPUT);             // Make GPIO Pin09(LED) as an Output Pin
  pinMode(10, OUTPUT);            // Make GPIO Pin10(LED) as an Output Pin
  pinMode(11, OUTPUT);            // Make GPIO Pin11(LED) as an Output Pin
}

void loop() {
  
  analogWrite(9,random(0,255));  // writing random analog voltages to pin09
  analogWrite(10,random(0,255)); // writing random analog voltages to pin10
  analogWrite(11,random(0,255)); // writing random analog voltages to pin11 
  delay(200);
}

/* 
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and Open Source Creativity
 *  Gurinder Singh Gill + Kavita Arora [BMOSC LABS]
*/

/*
 *  To program your Arduino, we have to first set up which Arduino we are using. 
 *  STEP 1 : Select your Arduino by clicking on : Tools > Board > Arduino Uno
 *  STEP 2 : Select the Port on which your Arduino is connected to by selecting : Tools > Port > COM6
 *  STEP 3 : Click the checkmark symbol [Verify] on the top left hand corner of this window to verify that the code has no errors
 *  STEP 4 : Click on the Right Arrow symbol (->) [Upload] to program your arduino 
 *           (You can see the status of your code executed below in the Status Bar as well as the flashing lights on your Arduino)
*/
