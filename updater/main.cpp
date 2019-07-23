/*
 * updateController.cpp
 * 
 * Copyright 2019 Matthew <Matthew@HOENHEIM>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
 

#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>

#include <tamtypes.h>
#include <sifrpc.h>
#include <debug.h>
#include <fileXio_rpc.h>
#include <loadfile.h>
#include <timer.h>





using namespace std;


void delay(void){
	
	
	for(int i = 0; i < 100; i++){
		
		for(int j = 0; i < 1000; j++){
		}
	}
	
}




void printTitle(void){
	
	init_scr();
	scr_printf("====================\n");
	scr_printf("\tPS2+ Updater\t\n");
	scr_printf("====================\n");
	
	
}

void loadModules(){
	
	scr_printf("Loading modules....\n");
	
	//FileIO
	SifLoadModule("rom0:iomanX.irx", 0, NULL);
	SifLoadModule("rom0:fileXio.irx", 0, NULL);
	SifLoadModule("rom0:SIO2MAN", 0, NULL);

	//USB
	SifLoadModule("rom0:usbd", 0, NULL);
	SifLoadModule("rom0:usbmass_fd", 0, NULL);
	
	//Controller
	SifLoadModule("rom0:sio2Cmds", 0, NULL);
	
	
	SifInitRpc(0);
	scr_printf("All modules loaded!\n");
	
}





int main(int argc, char *argv[]){
	
	
	
	printTitle();
	
	loadModules();
	
	fileXioInit();
	
	scr_printf("Checking for update.bin on root of usb drive...");
	ifstream file;
	
	file.open("mass:update.bin");
	
	if(file != NULL) { scr_printf("File found!\n");}
	else{scr_printf("File not found! Quitting..."); return -1;}
	
	
	
	fileXioExit();
	
	
	delay();
	
		return 0;
	
}
