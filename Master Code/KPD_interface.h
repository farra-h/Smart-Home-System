/*
 * KPD_interface.h
 *
 *  Author: FaRaH
 */ 


#ifndef KPD_INTERFACE_H_
#define KPD_INTERFACE_H_
 
#include "DIO_interface.h"
#define NOT_PRESSED 0xff

/*
	Function Name        : keypad_vInit
	Function Returns     : void
	Function Arguments   : void
	Function Description : Initialize the keypad.
*/
void keypad_vInit(void);

/*
	Function Name        : keypad_u8check_press
	Function Returns     : uint8
	Function Arguments   : void
	Function Description : Returns the pressed key or return NOT_PRESSED if no keys are pressed.
*/
uint8 keypad_u8check_press(void);


#endif /* KPD_INTERFACE_H_ */