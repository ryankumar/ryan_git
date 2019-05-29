# here after insmod of both module you observe in lsmod following
# hello_using_symbol     16384  0
# hello_export_symbol    16384  1 hello_using_symbol
# here export used by using fun.

obj-m := hello_export_symbol.o
obj-m += hello_using_symbol.o
all:
	        make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules

clean:
	        make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean

install:
	        make -C /lib/modules/$(shell uname -r)/build  M=$(PWD)  modules_install



