#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
MODULE_AUTHOR("Mr. Ryaan kumar");
MODULE_LICENSE("GPL");

int count=1;
int intarr[2]={1,-1};
char *str="RYAAN";

module_param(count,int,S_IRUSR|S_IWUSR|S_IROTH|S_IRGRP);
MODULE_PARM_DESC(count, "it is a integer");
module_param(str,charp,0000);

static int hello_init(void)
 {
   int i=0;
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
   printk("my name is %s\n ",str);
   for(i=0;i<count;i++)
    printk(" Hello World  index:%d\n",i);
   return 0;
 }
 static void hello_exit(void)
 {
   int i=0;
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
     for(i=0;i<count;i++)
    printk(" good bye World  index:%d\n",i);
 }

module_init(hello_init);
module_exit(hello_exit);

   
