
obj-m := hello.o
KERNELMODULE =  /lib/modules/$(shell uname -r)/build
PWD = $(shell pwd)
all:
	make -C $(KERNELMODULE) M=$(PWD) modules
	
clean:
	make -C $(KERNELMODULE) M=$(PWD) clean
install:
	make -C $(KERNELMODULE) M=$(PWD) modules_install


