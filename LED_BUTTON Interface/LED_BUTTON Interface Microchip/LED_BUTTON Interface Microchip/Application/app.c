/*
 * app.c
 *
 * Created: 25/09/2022 03:58:51 م
 *  Author: mohsa
 */ 
#include "app.h"

#define led1_pin 3
#define led1_port Port_A

#define button1_pin 5
#define button1_port Port_B


void appStatic() {
	//initialize LED
	LED_init(led1_pin,led1_port);
	LED_off(led1_pin, led1_port);
	
	//initialize button
	Button_init(button1_pin, button1_port);
	
}

void appStart(){
	EN_pin_value button_state;
	button_read(button1_pin,button1_port,&button_state);
	if (button_state == ON_value)
	{
		LED_on(led1_pin,led1_port);	
	}
	else if(button_state == OFF_value)
	{
		LED_off(led1_pin,led1_port);
	}
}