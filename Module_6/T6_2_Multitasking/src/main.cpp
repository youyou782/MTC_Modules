/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 In this example, we are going to create two tasks with different priorities

Task 1: It will have Normal Priority
    It will turn on LED1 when Button 1 is pressed, and turn it off when Button 1 is released 

Task 2: It will have AboveNormal Priority 
    It will turn on LED2 when Button 1 is pressed, and turn it off when Button 1 is released 

Expected behavior: Task 2 always indicates the button state earlier than Task 1, since it
has precedence (higher priority)

 */

#include "mbed.h"
#include <iostream>
#include "nrf52832_app_protect.h"
// the following is just a placeholder. You may remove it if you find it fit.
//---------------BEGIN PLACE HOLDER-------------------------/
// Blinking rate in milliseconds
#define BLINKING_RATE     100ms
//---------------END PLACE HOLDER-------------------------/

DigitalIn button(BUTTON1);


void task1_proc(){
    // create a DigitalOut object in the Task stack memory
    DigitalOut led(LED1);
    
    // turn off the LED
    led = 1;
    while (true) {
        // hint:: You can use std::cout prints to observe the operation of the task.
        // std::cout
        // the following is just a placeholder. You may remove it if you find it fit.
        //---------------BEGIN PLACE HOLDER-------------------------/
        // led = !led;
        
        led = button;
        if (led == 0){
            std::cout<<"task1 is running"<<std::endl;
        }

        ThisThread::sleep_for(BLINKING_RATE);
        //---------------END PLACE HOLDER-------------------------/
        
    }
}

void task2_proc(){
    // create a DigitalOut object in the Task stack memory
    DigitalOut led(LED2);
    
    // Turn off the LED
    led = 1;
    while(true){
        // hint:: You can use std::cout prints to observe the operation of the task.
        
        // the following is just a placeholder. You may remove it if you find it fit.
        //---------------BEGIN PLACE HOLDER-------------------------/
        // led = !led;
        // std::cout<<"task2 is running"<<std::endl;
        led = button;

        if (led == 0){
            std::cout<<"task2 is running"<<std::endl;
        }

        ThisThread::sleep_for(BLINKING_RATE);
        //---------------END PLACE HOLDER-------------------------/
        
    }
}


PwmOut led(LED1);
PwmOut led2(LED2);

int main()
{
    /////////////////////////////////////////////////////////
    // the following must always present in main files
    nrf52_disable_approtect();
    ///////////////////////////////////////////////////////////
    // specify period first
    // led.period(100000.0f);      // 4 second period
    // led.write(0.90f);      // 50% duty cycle, relative to period
    //led = 0.5f;          // shorthand for led.write()
    led2.period(4.0f);  // 4 second period
    led2.pulsewidth(2); // 2 second pulse (on)
    //led.pulsewidth(2);   // alternative to led.write, set duty cycle time in seconds
    while (1);
}






