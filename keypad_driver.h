/*
 * keypad_driver.h
 *
 * Created: 2/24/2023 4:06:38 PM
 *  Author: Mohamed fayek
 */ 


#ifndef KEYPAD_DRIVER_H_
#define KEYPAD_DRIVER_H_
#define NOTPRESSED 0xff
#include "DIO.h"
void keypad_vInit();
char keypad_u8check_press();



#endif /* KEYPAD_DRIVER_H_ */