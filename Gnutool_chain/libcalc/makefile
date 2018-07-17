include .config

ifdef STATIC
CC_STAT=-static 
CC_TYPE=static
endif

ifndef STATIC
CC_TYPE=dynamic
endif

all:bin/main
bin/main:src/main.o lib/libaddsub
	gcc ${CC_STAT} src/main.o -I ~/Desktop/Gnutool_chain/libcalc/inc/ -L ~/Desktop/Gnutool_chain/libcalc/lib/${CC_TYPE} -laddsub -o bin/main
src/main.o:
	make -C  src
lib/libaddsub:
	make -C lib
clean:
	make -C src clean 
	make -C lib clean

install:
	sudo cp bin/main /usr/bin

