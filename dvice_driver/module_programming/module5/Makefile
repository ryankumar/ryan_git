# here after insmod of both module you observe in lsmod following
# hello_using_symbol     16384  0
# hello_export_symbol    16384  1 hello_using_symbol
# here export used by using fun.

obj-m := hello_export_symbol.o
obj-m += hello_using_symbol.o
all:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` modules
	
clean:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` clean
install:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` modules_install


