/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com)
 *  Date  : 03-06-2015 10:22
 *
 *  Module Number: M06  
 *  Module Title:  Arduino Inputs
 *
 *  Module Statement: Interfacing a Light Dependent Resistor(LDR) Sensor, 
 *                    and print the LDR Values on Serial terminal.
 *
 *  Learning Objectives: 
 *  •  Understanding Microcontroller Inputs 
 *  •  Understanding how to interface inputs to Arduino
 *  •  Understanding how to interface a Analog sensor to Arduino
 *
 *  Hardware Requirements:
 *  •  Arduino Uno
 *  •  LDR Sensor
 *  •  10 KOhm Resistor
 *
 *  Hardware Connections: (Negitive Logic)
 *  [Arduino_Pin_A0]-----------[LDR_Pin2]
 *  [LDR_Pin1]-------[Arduino_5/3.3V_Pin]
 *  [Arduino_Pin_A0]-----------[Resistor]-------[GND]
 *
 *
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
*/

/* Software Includes */

/* Global Defines */
unsigned int LDR_sensor;   // Variable to store the readed button sensor data 

/* Global Variables */

/* Global Function Declearation */

void setup() {
     // Enable Serial Communication module with the Baudrate of 9600
     // Define a Arduino Pin as a Input (Pin A0)
}

void loop() {
     // analogRead Arduino Pin_A0 and store the value of the pin to LDR_sensor variable defind above
     // Serial Print out some Informative message following the  sensor value 
     // Give some delay to avoid frequent updates
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
