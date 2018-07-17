#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

int export_fun(void);
static int hello_init(void)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
    export_fun();
   return 0;
 }
 static void hello_exit(void)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
 }

module_init(hello_init);
module_exit(hello_exit);

   
