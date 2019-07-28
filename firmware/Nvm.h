/* 
 * File:   Nvm.h
 * Author: Matthew Cranford
 *
 * Created on July 23, 2019, 2:41 PM
 */

#include <xc.h>

#ifndef NVM_H
#define	NVM_H

#ifdef	__cplusplus
extern "C" {
#endif

    char eepromRead(unsigned char address);

    void eepromWrite(unsigned char address, char data);
    void nvmUnlock();
    
#ifdef	__cplusplus
}
#endif

#endif	/* NVM_H */

