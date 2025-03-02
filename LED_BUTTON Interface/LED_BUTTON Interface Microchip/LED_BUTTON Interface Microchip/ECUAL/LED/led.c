/*
LED Driver
By : Mohamed Samy
Date : 28/9/2022

*/
#include "led.h"

void LED_init(uint8_t led_pin, uint8_t led_port)
{
	DIO_init(led_pin, led_port, OUT_pin);
}
void LED_on(uint8_t led_pin, uint8_t led_port)
{
	DIO_write(led_pin, led_port, ON_value);
}
void LED_off(uint8_t led_pin, uint8_t led_port)
{
	DIO_write(led_pin, led_port, OFF_value);
}
void LED_toggle(uint8_t led_pin, uint8_t led_port)
{
	DIO_toggle(led_pin, led_port);
}
