#multiple c file with multiple kenel object file
obj-m += hello_init.o
obj-m +=hello_exit.o
all:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` modules
	
clean:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` clean
install:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` modules_install


