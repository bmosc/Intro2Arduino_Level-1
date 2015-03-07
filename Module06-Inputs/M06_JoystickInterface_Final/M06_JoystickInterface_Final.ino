/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com)
 *  Date  : 03-06-2015 10:22
 *
 *  Module Number: M06  
 *  Module Title:  Arduino Inputs
 *
 *  Module Statement: Interfacing a 2 axis joystick Sensor, 
 *                    and print X and Y axis sensor values on Serial terminal.
 *
 *  Learning Objectives: 
 *  •  Understanding Microcontroller Inputs 
 *  •  Understanding how to interface multiple inputs to Arduino
 *  •  Understanding how to interface a Analog sensor to Arduino
 *  •  Understanding how to identify type of sensor and hoe to connect it to arduino
 *
 *  Hardware Requirements:
 *  •  Arduino Uno
 *  •  2 Axis Joystilck Sensor
 *
 *  Hardware Connections: (Negitive Logic)
 *  [Arduino_Pin_A0]-----------[Joystick X Axis pin]
 *  [Arduino_Pin_A1]-----------[Joystick Y Axis pin]
 *  [Arduino_5/3.3V_Pin]-------[Joystick VCC Pin]
 *  [GND]----------------------[Joystick ground Pin]
 *
 *
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
*/

/* Software Includes */

/* Global Defines */
unsigned int X_axis;   // Variable to store the x axis data 
unsigned int Y_axis;   // Variable to store the y axis data 

/* Global Variables */

/* Global Function Declearation */

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);       // initialize serial communication at 9600 bits per second:
  pinMode(A0, INPUT);       // Making GPIO Pin_A0 as an Input Pin
  pinMode(A1, INPUT);       // Making GPIO Pin_A1 as an Input Pin
}

void loop() {
  X_axis = analogRead(A0);       // Reading the analog value from Pin_A0 into variable X_axis
  Y_axis = analogRead(A1);       // Reading the analog value from Pin_A0 into variable Y_axis

  Serial.print("X= ");           // Printing an Informative message  Serial.print(X); 
  Serial.print(X);               // Printing X axis data to serial terminal
  Serial.print(" :  Y= ");       // Printing an Informative message  Serial.print(X);
  Serial.println(Y);             // Printing Y axis data to serial terminal
  delay(1);                      // delay in between reads for stability
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
