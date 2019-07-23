/* 
 * File:   Eeprom.h
 * Author: matthew
 *
 * Created on July 5, 2019, 7:50 PM
 */
#include <xc.h>

#ifndef EEPROM_H
#define	EEPROM_H

#ifdef	__cplusplus
extern "C" {
#endif

    void nvmUnlock();
    void writeEeprom(unsigned char address, unsigned char data);
    unsigned char readEeprom(unsigned char address);

#ifdef	__cplusplus
}
#endif

#endif	/* EEPROM_H */

