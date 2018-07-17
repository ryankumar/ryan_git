include ../.config
ifdef ADD
 CC_FLAG +=-DADD
 endif

ifdef SUB
 CC_FLAG +=-DSUB
 endif

all:main.o

main.o:main.c
	gcc -c ${CC_FLAG} main.c
clean:
	rm main.o
