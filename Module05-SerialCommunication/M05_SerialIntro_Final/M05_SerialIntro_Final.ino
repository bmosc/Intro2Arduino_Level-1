/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com)
 *  Date  : 03-06-2015 10:22
 *
 *  Module Number: M05  
 *  Module Title:  Serial Communication Basics
 *
 *  Module Statement:  Communicating with PC
 *
*  Learning Objectives: 
 *  •  Understanding Serial vs Parallel Communication's
 *  •  Understanding How to establish communication between your PC and Arduino
 *  •  Understanding how to reuse previous written code and modify it as per your requirements
 *
 *  Hardware Requirements:
 *  •  Arduino Uno
 *
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
*/

/* Software Includes */

/* Global Defines */

/* Global Variables */

/* Global Function Declearation */

void setup() {
  Serial.begin(9600);                         // Enable the Serial Communication Module with 9600Baud (Speed)
  Serial.println("Hello Audience !!");        // Printing some message on the Serial terminal
}

void loop() {
  // No code to be written for this section 
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
