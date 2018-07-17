#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

 int export_fun(void)
 {
   printk("inside the  %s functions\n",__func__);
   return 0; 
  }
EXPORT_SYMBOL(export_fun);

static int hello_init(void)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
   return 0;
 }
 static void hello_exit(void)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
 }

module_init(hello_init);
module_exit(hello_exit);

   
