# **PS2 Plus**

This project is a work in progress for making a PS2 Controller emulator. It was designed for the **PIC16F18876** microcontroller. As of right now the controller emulation is working great. There are still some features that I want to add but the main part of the project is complete. 

There are several hold-ups keeping this project from being complete, the main one being that writing an application for the PS2 and being able to send custom commands to the controller is difficult. I am slowly deciphering everything done by the PS2Dev team but it is slow going. If anyone would like to contribute or offer help/advice, I would gladly take it.

This project consists of several smaller projects each with its own folder, and is as follows:

**firmware** - Main code of the project. Contains the PS2 protocol code.

**hardware** - The schematics and pcb design of the project. Includes information regarding external circuitry.

**updater** - The PS2 application for updating the controller.

**bootloader** - The bootloader code for the mcu.

**docs** - Contains datasheets and other useful documentation.

## **TODO**

- Different analog sticks support
- Bootloader
- PS2 Updater Application

## **Build**

You will need a pickit3, MPLAB (_free_), and XC8 compiler to flash this. To build from source, open the firmware project in MPLAB and click 'run'. This will compile the project and then initiate the transfer to the mcu.

The correct pinout of the microcontroller can be found in the **docs** folder.

## **Acknowledgements**

This project has only moved forward due to these individuals and sites (in no particular order):

1. [Curious Inventor](http://store.curiousinventor.com/guides/PS2) - documentation of the PS2 controller Protocol
2. [Scanlime](https://gist.github.com/scanlime/5042071) - documentation of the PS2 controller protocol
3. [Aurelio Manara](https://github.com/Aurelio92/GCPlus) - for answering countless questions and advice.
4. [Gman](https://gmanmodz.com/) - for initial interest in this project and countless contributions to it. Wrote some of the code.
5. [PS2Dev Team](https://github.com/ps2dev) - for all the hard and amazing work on homebrew for the PS2.

