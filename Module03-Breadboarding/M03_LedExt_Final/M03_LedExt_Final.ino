/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com)
 *  Date  : 03-05-2015 20:20
 *
 *  Module Number: M03  
 *  Module Title:  Breadbording is FUN 
 *
 *  Module Statement: Setting up your arduino with a external LED and making an external LED Blink. [completed]
 *
 *  Learning Objectives: 
 *  •  Understanding How to write a arduino code
 *  •  Understanding Breadboarding basics 
 *  •  Interfacing an Output device (LED) to Arduino
 *  •  Understanding how to reuse previous written code and modify it as per your requirements
 *
 *  Hardware Requirements:
 *  •  Arduino Uno
 *  •  Breadboard
 *  •  A Green LED and 330Ohm Resistor  
 *
 *  Hardware Connections:
 *  [Arduino_Pin_9]-----------[LED-]------[Resistor1]-------[Arduino_5/3.3V_Pin]
 *
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
*/

/* Software Includes */

/* Global Defines */

/* Global Variables */

/* Global Function Declearation */

void setup() {
  pinMode(9,OUTPUT);         // Making GPIO Pin9(LED) as an Output Pin
  digitalWrite(9, LOW);      // Making sure that the LED is initially off 
}

void loop() {
  digitalWrite(9,HIGH);     // Changing the state of the led H->L alternatively
  delay(1000);               // Delay for 1sec
  digitalWrite(9,LOW);      // Changing the state of the led L->H alternatively
  delay(1000);               // Delay for 1sec
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
