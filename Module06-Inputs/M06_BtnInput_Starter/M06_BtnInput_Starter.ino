/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com)
 *  Date  : 03-06-2015 10:22
 *
 *  Module Number: M06  
 *  Module Title:  Arduino Inputs
 *
 *  Module Statement: Interfacing a simple Button Sensor, 
 *                    and print a message weather the button is pressed or not.
 *
 *  Learning Objectives: 
 *  •  Understanding Microcontroller Inputs 
 *  •  Understanding how to interface inputs to Arduino
 *  •  Understanding how to interface a Button sensor Input to Arduino
 *
 *  Hardware Requirements:
 *  •  Arduino Uno
 *  •  Tact Switch (Button)
 *  •  10 KOhm Resistor
 *
 *  Hardware Connections: (Negitive Logic)
 *  [Arduino_Pin_A0]-----------[BUTTON_Pin2]------[Resistor1]-------[Arduino_5/3.3V_Pin]
 *  [BUTTON_Pin1]--------------[GND]
 *
 *
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
*/

/* Software Includes */

/* Global Defines */
unsigned int button_sensor;   // Variable to store the readed button sensor data 

/* Global Variables */

/* Global Function Declearation */

void setup() {
     // Enable Serial Communication module with the Baudrate of 9600
     // Define a Arduino Pin as a Input (Pin A0)
}

void loop() {
     // Read Arduino Pin_A0 and store the value of the pin to button_sensor variable defind above
     // Serial Print out the status of the switch 
     // Give some delay to avoid switch debounce
}

/* 
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
 *  Gurinder Singh Gill  BMOSC LABS
*/

/*
 *  To program your arduino, we have to first set up which Arduino are we using. 
 *  STEP 1 : Select your arduino by clicking on : Tools > Board > Arduino Uno
 *  STEP 2 : Select the Port on which your arduino is connected by clicking on : Tools > Port > COM6
 *  STEP 3 : Click on the checkmark symbol on the top right corner to verify that the code has no errors
 *  STEP 4 : Click on the Right Arrow symbol (->) to program your arduino 
 *           (You can see the status below as well as the flashing lights on your arduino)
*/
