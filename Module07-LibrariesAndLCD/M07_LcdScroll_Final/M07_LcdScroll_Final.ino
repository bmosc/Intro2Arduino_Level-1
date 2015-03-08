/* 
 *  Author: Gurinder Singh Gill (gsgill112[at]gmail[dot]com)
 *  Date  : 03-06-2015 10:22
 *
 *  Module Number: M07  
 *  Module Title:  Arduino Libraries and Fun with LCD's
 *
 *  Module Statement: Interfacing a LCD Module to Arduino and making a Charactor Scroll. 
 *
 *  Learning Objectives: 
 *  •  Understanding Display Modules and their operation
 *  •  Understanding parallel port interfacing with arduino
 *  •  Understanding what are arduino libraries and how to use them
 *
 *  Hardware Requirements:
 *  •  Arduino Uno
 *  •  16x2 LCD Display Module
 *  •  10 KOhm Potentiometer/500 Ohm Resistor/ 1K Resistor 
 *
 *  Hardware Connections:                   Actual LCD Pins( JHD162A has 16 pins)          Connect to Arduino Pins
 *  LCD VSS pin                             [1]                                            [ground]
 *  LCD VCC pin                             [2]                                            [5V]
 *  LCD VEE pin                             [3]-----------[~500 Ohm Resistor]--------------[ground]
 *  LCD RS pin                              [4]                                            [12]
 *  LCD R/W pin                             [5]                                            [ground]
 *  LCD Enable pin                          [6]                                            [11]
 *  LCD D0-D3 pin                           [7,8,9,10]                                     [ground]
 *  LCD D4 pin                              [11]                                           [5]
 *  LCD D5 pin                              [12]                                           [4]
 *  LCD D6 pin                              [13]                                           [3]
 *  LCD D7 pin                              [14]                                           [2]
 *  LCD LED+ pin                            [15]                                           [5V]
 *  LCD LED- pin                            [16]                                           [ground]
 *
 *
 *  This code is licensed under "MIT license"
 *  Copyright (c) 2015 Bangalore MakeSpace and OpenSource Creativity
*/

/* Software/Library Includes */
#include <LiquidCrystal.h>

/* Global Defines */

/* Global Variables */

/* Global Function Declearation */

/* Global Objects */
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   // initialize the library with the numbers of the interface pins[Syntax lcd(RS, E, D4, D5, D6, D7)]

void setup() {
lcd.begin(16,2);       // Define the number of lines and Lines per charactor that you are using
}  

void loop() {
for(int i = 0; i<=15; i++){               // logic for scrolling a LCD Char you can also use lcd.scrollDisplayLeft();/ lcd.scrollDisplayRight();
  lcd.print("G");
  lcd.setCursor(0,1);
  lcd.clear();
  delay(10);
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
