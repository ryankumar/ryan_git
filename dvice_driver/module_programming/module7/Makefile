
obj-m := hello.o
all:
	make -C /lib/modules/`uname -r`/build/ M=`pwd` modules
	
clean:
	make -C /lib/modules/`uname -r`/build/ M=`pwd` clean
install:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` modules_install


