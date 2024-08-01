/*
 * ADC_interface.h
 *
 *  Author: FaRaH
 */ 


#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

#include "STD_TYPES.h"

/*
	Function Name        : ADC_vinit
	Function Returns     : void
	Function Arguments   : void
	Function Description : Initialize the ADC.
*/
void ADC_vinit(void);

/*
	Function Name        : ADC_u16Read
	Function Returns     : uint16
	Function Arguments   : void
	Function Description : Read the value which converted by the ADC.
*/
uint16 ADC_u16Read(void);


#endif /* ADC_INTERFACE_H_ */