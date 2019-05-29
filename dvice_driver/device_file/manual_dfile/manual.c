#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>

dev_t dev =0;

static int __init hello_init(void)
{
	if((alloc_chrdev_region(&dev,0,1,"Embetronicx_dev")) <0){
		printk(KERN_INFO "cannot allocate major number for device\n");
		return -1;
	}

	printk(KERN_INFO "Major=%d Minor=%d \n",MAJOR(dev), MINOR(dev));
	printk(KERN_INFO "kernel module inserted successfully...\n");
	return 0;
}

void __exit hello_exit(void)
{
	unregister_chrdev_region(dev,1);
	printk(KERN_INFO "kernel module removed Successfully...\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("EMbetronics <embetronicx@gmail.com>");
MODULE_DESCRIPTION("A simple hello world driver");
MODULE_VERSION("1.1");

