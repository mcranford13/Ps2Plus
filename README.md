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

- Bootloader
- PS2 Updater Application

## **Build**

You will need a pickit3, MPLAB (_free_), and XC8 compiler to flash this. To build from source, open the firmware project in MPLAB and click 'run'. This will compile the project and then initiate the transfer to the mcu.

The correct pinout of the microcontroller can be found in the **docs** folder.

## **Analog Stick Setup**

> 1. Press Select, L1, and L2 to enter configuration mode. The PS2 should say that there is no controller connected (if you are in a game).
> 2. Move the analog sticks slowly in a circle.
> 3. Press Select, L1, and R1 to exit. The PS2 should now recognize the controller.
> 4. Reboot the controller (rebooting the ps2 works too).
> Analog sticks should now be working.

To set the analog sticks back to the default values:
> 1. Press Select, L1, and L2 to enter configuration mode.
> 2. Press L2, R2, Select, Start.
> 3. Reboot controller (or ps2).

## **Hardware**
Please note that this is my first pcb design and if there are mistakes or any room for improvement please make an issue or a pull request. I am always happy to learn and improve. 

I have recieved feedback that the pad layout of the pcb is not optimal, this occured due to the pins chosen during the prototyping phase and when I switched from the DIP to the TQFP. I intend to update this but I am been really busy with school and life. Therefore I will release it how it is for now, and update it when I get a chance. If anyone would like to submit an updated pcb, I'd be happy to include it. Thanks for your understanding.

## **Acknowledgements**

This project has only moved forward due to these individuals and sites (in no particular order):

1. [Curious Inventor](http://store.curiousinventor.com/guides/PS2) - documentation of the PS2 controller Protocol
2. [Scanlime](https://gist.github.com/scanlime/5042071) - documentation of the PS2 controller protocol
3. [Aurelio Manara](https://github.com/Aurelio92/GCPlus) - for answering countless questions and advice.
4. [Gman](https://gmanmodz.com/) - for initial interest in this project and countless contributions to it. Wrote some of the code.
5. [PS2Dev Team](https://github.com/ps2dev) - for all the hard and amazing work on homebrew for the PS2.

