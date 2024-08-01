/*
 * LED_program.c
 *
 *  Author: FaRaH
 */ 

#include "LED_interface.h"

void LED_vInit(uint8 portname,uint8 pinnumber)
{
	DIO_vsetPINDir(portname, pinnumber, DIO_PIN_OUTPUT);//Set the given pin in the given port as an output
}

void LED_vTurnOn(uint8 portname,uint8 pinnumber)
{
	DIO_write(portname, pinnumber, DIO_PIN_HIGH);//Set the given pin in the given port to one(on)
}

void LED_vTurnOff(uint8 portname,uint8 pinnumber)
{
	DIO_write(portname, pinnumber, DIO_PIN_LOW);//Set the given pin in the given port to zero(off)
}

void LED_vToggle(uint8 portname,uint8 pinnumber)
{
	DIO_toggle(portname,pinnumber);//Set the given pin in the given port to zero if it is one or set it to one if it is zero
}

uint8 LED_u8ReadStatus(uint8 portname,uint8 pinnumber)
{
	return DIO_u8read(portname,pinnumber);//return the current status of the given pin
}