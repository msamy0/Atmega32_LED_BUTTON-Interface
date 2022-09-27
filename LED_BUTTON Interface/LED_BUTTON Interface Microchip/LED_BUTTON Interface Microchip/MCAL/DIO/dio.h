#ifndef DIO_H_
#define DIO_H_

#include "../../Utilities/typedefs.h"
#include "../../Utilities/registers.h"

#define Port_A 'A'
#define Port_B 'A'
#define Port_C 'A'
#define Port_D 'A'


void DIO_init(uint8_t pinNum, uint8_t portNum, EN_pin_direction direction);
void DIO_write(uint8_t pinNum, uint8_t portNum, EN_pin_value value);
void DIO_toggle(uint8_t pinNum, uint8_t portNum);
void DIO_read(uint8_t pinNum, uint8_t portNum,  EN_pin_value *value);


#endif