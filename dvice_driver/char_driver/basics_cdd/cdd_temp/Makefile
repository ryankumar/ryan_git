obj-m += char.o

all:
	make -C /lib/modules/`uname -r`/build M=$(shell pwd) modules
	#make -C /usr/src/linux-headers-`uname -r` M=$(shell pwd) modules
clean:
	#make -C /usr/src/linux-headers-`uname -r` M=$(shell pwd) clean
	make -C /lib/modules/`uname -r`/build M=$(shell pwd) clean
