# multiple c file with licence.

obj-m += hello_init.o
obj-m +=hello_exit.o
obj-m :=hello_initexit.o
hello_initexit-objs := hello_init.o hello_exit.o
all:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` modules
	
clean:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` clean
install:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` modules_install


