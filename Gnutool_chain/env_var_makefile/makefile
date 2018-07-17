
include .config
# LINUX NATIVE COMPILER WORKS FOR INTELL ARCH.
CC=gcc
# LINUX CROSS COMPILER WORKS FOR ARM ARCH.
#CC=arm-gcc
# UNIX COMPILER
#CC=cc
ifdef FLAG
export CC_FLAG=-Wall
endif

ifdef DEBUG
export	DEBUG_FLAG=-g
endif

ifdef ADD
export CALC_FUNC += -DADD
 endif

ifdef SUB
export CALC_FUNC += -DSUB
 endif

all:main1
main1:main.o add.o sub.o
	${CC}   main.o add.o sub.o -o main1
main.o:main.c
	${CC} -c ${CC_FLAG} ${DEBUG_FLAG} ${CALC_FUNC}  main.c
add.o:add.c
	${CC}  -c  ${CC_FLAG} ${DEBUG_FLAG}  add.c
sub.o:sub.c
	 ${CC}  -c ${CC_FLAG} ${DEBUG_FLAG}  sub.c
clean:
	rm *.o main1
install:
	sudo cp main1 /usr/bin

