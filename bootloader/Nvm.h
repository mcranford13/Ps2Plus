/* 
 * File:   Nvm.h
 * Author: Matthew Cranford
 *
 * Created on July 4, 2019, 9:47 PM
 */

#ifndef NVM_H
#define	NVM_H

#ifdef	__cplusplus
extern "C" {
#endif

    void nvmUnlock();
    void pgmErase(unsigned int address);
    void pgmWrite(unsigned int address, unsigned int *buffer, unsigned char length);
    void pgmRead(unsigned int address, unsigned int *buffer, unsigned int length);



#ifdef	__cplusplus
}
#endif

#endif	/* NVM_H */

