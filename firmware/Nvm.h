/* 
 * File:   Nvm.h
 * Author: matthew
 *
 * Created on July 23, 2019, 2:41 PM
 */

#include <xc.h>

#ifndef NVM_H
#define	NVM_H

#ifdef	__cplusplus
extern "C" {
#endif


    void eepromWrite(unsigned char address, char data);
    char eepromRead(unsigned char address);
    void eepromWriteBuf(unsigned char address, unsigned char *buffer, unsigned char length);
    void eepromReadBuf(unsigned char address, unsigned char *buffer, unsigned char length);
    void nvmUnlock();
    


#ifdef	__cplusplus
}
#endif

#endif	/* NVM_H */

