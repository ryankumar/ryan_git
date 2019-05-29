obj-m := auto.o
KERNELDIR = /lib/modules/`uname -r`/build/
PWD := $(shell pwd)

defualt:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean

install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
