// this programme contains __init and __exit to free the kernel memory after initialization.check this after insmod of hello.ko and hello1.ko bu using lsmod. and check license part also in "sudo tail -f /var/log/syslog" or 'dmesg'
//#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
MODULE_LICENSE("GPL");

 __init int hello_init(void)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
   return 0;
 }
 void hello_exit(void)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
 }

module_init(hello_init);
module_exit(hello_exit);

   
