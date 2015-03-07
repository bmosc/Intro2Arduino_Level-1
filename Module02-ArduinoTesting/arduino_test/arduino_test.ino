/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com)
 *  Date  : 03-04-2015 20:50
 *
 *  Module Number: M02  
 *  Module Title:  Arduino Testing 
 *
 *  Module Statement: Burn the following code to test that your Arduino is working fine.
 *
 *  Learning Objectives: 
 *  •  Understanding what is arduino and how to program it.
 *
 *  To program your arduino, we have to first set up which Arduino are we using. 
 *  STEP 1 : Select your arduino by clicking on : Tools > Board > Arduino Uno
 *  STEP 2 : Select the Port on which your arduino is connected by clicking on : Tools > Port > COM6
 *  STEP 3 : Click on the checkmark symbol on the top right corner to verify that the code has no errors
 *  STEP 4 : Click on the Right Arrow symbol (->) to program your arduino 
 *           (You can see the status below as well as the flashing lights on your arduino)
 *
 *
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
*/

/* Software Includes */

/* Global Defines */

/* Global Variables */

/* Global Function Declearation */

void setup() {
  pinMode(13,OUTPUT);         // Making GPIO Pin13(LED) as an Output Pin
  digitalWrite(13, LOW);      // Making sure that the LED is initially off 
}

void loop() {
  digitalWrite(13,1^digitalRead(13));     // Changing the state of the led H->L or L->H alternatively
  delay(1000);                            // Delay for 1sec
}

/* 
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
 *  Gurinder Singh Gill  BMOSC LABS
*/
