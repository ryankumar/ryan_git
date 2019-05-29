#multiple c file with multiple kenel object file
obj-m += hello_init.o
obj-m +=hello_exit.o
all:
	make -C /usr/src/linux-headers-4.15.0-36-generic M=`pwd` modules
	
clean:
	make -C /usr/src/linux-headers-4.15.0-36-generic M=`pwd` clean
install:
	make -C /usr/src/linux-headers-4.15.0-36-generic M=`pwd` modules_install


