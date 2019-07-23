/* 
 * File:   Opcodes.h
 * Author: Matthew Cranford
 *
 * Created on March 13, 2019, 7:08 PM
 */

#ifndef OPCODES_H
#define	OPCODES_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <xc.h>
#include "Spi.h"


#define _XTAL_FREQ 32000000

#define INIT_PRESSURE_SENSOR 0x02       //0x40
#define BUTTON_INCLUSION 0x12           //0x41
#define MAIN_POLLING 0x42               //0x42, this value is the same reversed
#define ENTER_EXIT_ESCAPE 0xC2          //0x43
#define ANALOG_DIGITAL_SWITCH 0x22      //0x44
#define STATUS_INFO 0xA2                //0x45
#define DEVICE_DESCRIPTOR_FIRST 0x62    //0x46
#define DEVICE_DESCRIPTOR_SECOND 0xE2   //0x47
#define DEVICE_DESCRIPTOR_LAST 0x32     //0x4C
#define MAP_MOTOR 0xB2                  //0x4D
#define CONTROL_RESPONSE 0xF2           //0x4F
#define TURN_ON 0x80                    //0x01
#define TURN_OFF 0x00                   //0x00
#define ESCAPE_MODE 0xCF                //Config Mode 0xF3 reversed
#define DIGITAL_MODE 0x82               //0x41 digital mode reversed
#define ANALOG_MODE 0x9E                //0x79 reversed 
#define END_HEADER 0x5A    

#define SLAVE_SELECT RA5



#ifdef	__cplusplus
}
#endif

#endif	/* OPCODES_H */
