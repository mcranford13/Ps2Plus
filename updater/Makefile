
EE_BIN = updateController.elf
EE_OBJS = main.o
EE_LIBS = -ldebug -lfileXio -lstdc++ -lkernel

IRXS = fileXio.irx iomanX.irx usbmass_bd.irx

all: $(EE_BIN) $(IRXS)

%.irx:
	cp $(PS2SDK)/iop/irx/$@ $@


run:
	pcsx2 --nodisc --console --elf="./updateController.elf"

clean:
	rm -f *.elf *.o *.a *.irx
	
copy:
	sudo mount -t drvfs D: /mnt/d
	cp $(EE_BIN) /mnt/d/
	sudo umount /mnt/d
	
include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
include $(PS2SDK)/samples/Makefile.iopglobal  
