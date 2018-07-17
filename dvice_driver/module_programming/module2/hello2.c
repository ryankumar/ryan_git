#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

#define DRIVER_AUTHOR "Mr. Ryaan kumar"
#define DRIVER_DISC   "sample driver"

static int  __init hello_init(void)
 {
   printk(KERN_INFO "HEllo world \n");
   return 0;
 }

static void __exit hello_exit(void)
 {
   printk(KERN_INFO "good bye \n");
 }

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");

MODULE_DESCRIPTION(DRIVER_DISC);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_SUPPORTED_DEVICE("test device");

