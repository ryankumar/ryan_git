#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
MODULE_AUTHOR("Mr. Ryaan kumar");
MODULE_LICENSE("GPL");

int valueETX,arr_valueETX[4];
char *nameETX;
int cb_valueETX =0;

module_param(valueETX,int,S_IRUSR|S_IWUSR);
module_param(nameETX,charp,S_IRUSR|S_IWUSR);
module_param_array(arr_valueETX, int,NULL,S_IRUSR|S_IWUSR);

/*------------------Module_param_cb() ---------------------------------------*/

int notify_param(const char *val,const struct kernel_param *kp)
{
        int res = param_set_int(val,kp); //Use helper for write variable
        if(res==0)
        {
                printk(KERN_INFO "callback function called ...\n");
                printk(KERN_INFO "New value of cb_valueETX =%d\n ",cb_valueETX);
                return 0;

        }
        return -1;


}

const struct kernel_param_ops my_param_ops =
{
        .set=&notify_param, //use our setter
        .get=&param_get_int, //standard getter
}

module_param_cb(cb_valueETX,&my_param_ops, &cb_valueETX, S_IRUGO|S_IWUSR );
/*--------------------------------------------------------------------------*/


static int __init hellow_world_init(void)
{
        int i;
        printk(KERN_INFO "valueETX= %d\n",valueETX);
        printk(KERN_INFO "cb_valueETX= %d\n",cb_valueETX);
        printk(KERN_INFO "NameETX= %s\n",nameETX);
        for(i=0;i<(sizeof arr_valueETX /sizeof (int)) ;i++){
        printk(KERN_INFO "Arr_valuETX[%d] = %d\n",i,arr_valueETX[i]);

        }
        printk(KERN_INFO "Kernel Module Inserted Successfully...\n");
return 0;
}

void __exit hellow_world_exit(void)
{
        printk(KERN_INFO "Kernel Module Removed successfully...\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);


   
