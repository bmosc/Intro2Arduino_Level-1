/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com)
 *  Date  : 03-06-2015 17:54
 *
 *  Module Number: M04  
 *  Module Title:  Arduino Outputs
 *
 *  Module Statement: Setting up your arduino with a external LED and making an external LED Fade. [completed]
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
int counter;    // counter for fading 

/* Global Function Declearation */

void setup() {
  pinMode(9,OUTPUT);         // Making GPIO Pin9(LED) as an Output Pin
}

void loop() {
  for(counter = 0; counter <= 255 ; counter++){       // Loop for fading the LED from dim to bright
    analogWrite(9,counter);                            // writing analog voltages to the pin based on loop above
    delay(10);                                          // delay to prolong the fade effect
  }
  for(counter = 255; counter >= 0; counter--){        // Loop for fading the LED from bright to dim
    analogWrite(9,counter);        // writing analog voltages to the pin based on loop above
    digitalWrite(10,~digitalRead(10));
    delay(10);                                          // delay to prolong the fade effect
  }
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
