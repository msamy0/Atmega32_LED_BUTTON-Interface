/*
* DIO implementation
* For practicing

*/
#include "dio.h"

void DIO_init(uint8_t pinNum, uint8_t portNum, EN_pin_direction direction)
{
	switch (portNum)
	{
		case Port_A:
			if (direction == OUT_pin)
			{
				DDRA_REG |= (1 << pinNum);
				break;
			}
			else if (direction == IN_pin)
			{
				DDRA_REG &=~ (1 << pinNum);
				break;
			}
			else
			{
				//Handel Error
				break;
			}

		case Port_B:
			if (direction == OUT_pin)
			{
				DDRB_REG |= (1 << pinNum);
				break;
			}
			else if (direction == IN_pin)
			{
				DDRB_REG &= ~(1 << pinNum);
				break;
			}
			else
			{
				//Handel Error
				break;
			}
		case Port_C:
			if (direction == OUT_pin)
			{
				DDRC_REG |= (1 << pinNum);
				break;
			}
			else if (direction == IN_pin)
			{
				DDRC_REG &= ~(1 << pinNum);
				break;
			}
			else
			{
				//Handel Error
				break;
			}

		case Port_D:
			if (direction == OUT_pin)
			{
				DDRD_REG |= (1 << pinNum);
				break;
			}
			else if (direction == IN_pin)
			{
				DDRD_REG &= ~(1 << pinNum);
				break;
			}
			else
			{
				//Handel Error
				break;
			}

	}

}

void DIO_write(uint8_t pinNum, uint8_t portNum, EN_pin_value value)
{
	switch (portNum)
	{
		case Port_A:
			if (value == ON_value)
			{
				PORTA_REG |= (1 << pinNum);
				break;
			}
			else if (value == OFF_value)
			{
				PORTA_REG &= ~(1 << pinNum);
				break;
			}
			else
			{
				//Handel Error
				break;
			}

		case Port_B:
			if (value == ON_value)
			{
				PORTB_REG |= (1 << pinNum);
				break;
			}
			else if (value == OFF_value)
			{
				PORTB_REG &= ~(1 << pinNum);
				break;
			}
			else
			{
				//Handel Error
				break;
			}

		case Port_C:
			if (value == ON_value)
			{
				PORTC_REG |= (1 << pinNum);
				break;
			}
			else if (value == OFF_value)
			{
				PORTC_REG &= ~(1 << pinNum);
				break;
			}
			else
			{
				//Handel Error
				break;
			}

		case Port_D:
			if (value == ON_value)
			{
				PORTD_REG |= (1 << pinNum);
				break;
			}
			else if (value == OFF_value)
			{
				PORTD_REG &= ~(1 << pinNum);
				break;
			}
			else
			{
				//Handel Error
				break;
			}
	}
}

void DIO_read(uint8_t pinNum, uint8_t portNum, EN_pin_value* value)
{
	switch (portNum)
	{
		case Port_A:
			if (((PINA_REG & (1 << pinNum)) >> pinNum))
			{
				*value = ON_value;
				break;
			}

			else if (!((PINA_REG & (1 << pinNum)) >> pinNum))
			{
				*value = OFF_value;
				break;
			}

			else
			{
				// Error handling
				break;
			}

		case Port_B:
			if (((PINB_REG & (1 << pinNum)) >> pinNum))
			{
				*value = ON_value;
				break;
			}

			else if (!((PINB_REG & (1 << pinNum)) >> pinNum))
			{
				*value = OFF_value;
				break;
			}

			else
			{
				// Error handling
				break;
			}
		case Port_C:
			if (((PINC_REG & (1 << pinNum)) >> pinNum))
			{
				*value = ON_value;
				break;
			}

			else if (!((PINC_REG & (1 << pinNum)) >> pinNum))
			{
				*value = OFF_value;
				break;
			}

			else
			{
				// Error handling
				break;
			}
		case Port_D:
			if (((PIND_REG & (1 << pinNum)) >> pinNum))
			{
				*value = ON_value;
				break;
			}

			else if (!((PIND_REG & (1 << pinNum)) >> pinNum))
			{
				*value = OFF_value;
				break;
			}

			else
			{
				// Error handling
				break;
			}

	}
}

void DIO_toggle(uint8_t pinNum, uint8_t portNum)
{

	EN_pin_value temp_value;
	DIO_read(pinNum, portNum, &temp_value);

	if (temp_value == OFF_value)
	{
		DIO_write(pinNum, portNum, OFF_value);
	}
	else if (temp_value == ON_value)
	{
		DIO_write(pinNum, portNum, ON_value);
	}
	else
	{
		//Error handle
	}

}
