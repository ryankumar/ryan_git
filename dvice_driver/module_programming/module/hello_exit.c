#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
 static void hello_exit(void)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
 }

module_exit(hello_exit);
   
