/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com)
 *  Date  : 03-06-2015 10:22
 *
 *  Module Number: M06  
 *  Module Title:  Arduino Inputs
 *
 *  Module Statement: Interfacing a simple Button Sensor 
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
 *  Hardware Connections:
 *  [Arduino_Pin_A0]-----------[BUTTON_Pin2]------[Resistor1]-------[Arduino_5/3.3V_Pin]
 *  [BUTTON_Pin1]--------------[GND]
 *
 *
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
*/

/* Software Includes */

/* Global Defines */
unsigned int button_Sensor;   // Variable to store the readed button sensor data 

/* Global Variables */

/* Global Function Declearation */

void setup() {
  Serial.begin(9600);          // Enable the Serial Communication Module with 9600Baud (Speed)
  pinMode(A0, INPUT);          // Making GPIO Pin_A0 as an Input Pin
}

void loop() {
 button_Sensor = digitalRead(A0);          // Reading the digital value from Pin_A0
 if(button_Sensor == 1){                   // if button is not pressed it will return a 1 or a HIGH
   Serial.println("Button Not Pressed");   // Print the Status message over the serial terminal
 }
 if(button_Sensor == 0){                   // if button is not pressed it will return a 0 or a LOW
   Serial.println("Button Pressed");       // Print the Status message over the serial terminal
 }
 delay(100);                               // delay (minimum of 5-10ms) to avoid Button Debouncing
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
