#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

static int hello_init(void)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
   return 0;
 }
module_init(hello_init);
   
