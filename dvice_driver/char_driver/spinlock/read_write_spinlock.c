#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include<linux/slab.h>                 //kmalloc()
#include<linux/uaccess.h>              //copy_to/from_user()
#include <linux/kthread.h>             //kernel threads
#include <linux/sched.h>               //task_struct 
#include <linux/delay.h>
 
 
//Static method to initialize the read write spinlock
static DEFINE_RWLOCK(etx_rwlock); 
 
//Dynamic method to initialize the read write spinlock
//rwlock_t etx_rwlock;
 
unsigned long etx_global_variable = 0;
dev_t dev = 0;
static struct class *dev_class;
static struct cdev etx_cdev;
 
static int __init etx_driver_init(void);
static void __exit etx_driver_exit(void);
 
static struct task_struct *etx_thread1;
static struct task_struct *etx_thread2; 
static struct task_struct *etx_thread3;  
static struct task_struct *etx_thread4;
static struct task_struct *etx_thread5;
/*************** Driver Fuctions **********************/
static int etx_open(struct inode *inode, struct file *file);
static int etx_release(struct inode *inode, struct file *file);
static ssize_t etx_read(struct file *filp, 
                char __user *buf, size_t len,loff_t * off);
static ssize_t etx_write(struct file *filp, 
                const char *buf, size_t len, loff_t * off);
 /******************************************************/
 
int thread_function1(void *pv);
int thread_function2(void *pv);
int thread_function3(void *pv);
int thread_function4(void *pv);
int thread_function5(void *pv);
 
int thread_function1(void *pv)
{
    while(!kthread_should_stop()) {  
        write_lock(&etx_rwlock);
        etx_global_variable++;
	printk(KERN_INFO "In EmbeTronicX Thread Function1 : write value %lu\n", etx_global_variable);
        write_unlock(&etx_rwlock);
        msleep(1000);
    }
    return 0;
}
 
int thread_function2(void *pv)
{
    while(!kthread_should_stop()) {
        read_lock(&etx_rwlock);
        printk(KERN_INFO "In EmbeTronicX Thread Function2 : Read value %lu\n", etx_global_variable);
        read_unlock(&etx_rwlock);
        msleep(1000);
    }
    return 0;
}
 
 
int thread_function3(void *pv)
{
    while(!kthread_should_stop()) {
        read_lock(&etx_rwlock);
        printk(KERN_INFO "In EmbeTronicX Thread Function3 : read value %lu\n", etx_global_variable);
        read_unlock(&etx_rwlock);
        msleep(1000);
    }
    return 0;
}

int thread_function4(void *pv)
{
    while(!kthread_should_stop()) {
        read_lock(&etx_rwlock);
        printk(KERN_INFO "In EmbeTronicX Thread Function4 : read value %lu\n", etx_global_variable);
        read_unlock(&etx_rwlock);
        msleep(1000);
    }
    return 0;
}

int thread_function5(void *pv)
{
    while(!kthread_should_stop()) {
        read_lock(&etx_rwlock);
        printk(KERN_INFO "In EmbeTronicX Thread Function5 : read value %lu\n", etx_global_variable);
        read_unlock(&etx_rwlock);
        msleep(1000);
    }
    return 0;
}
static struct file_operations fops =
{
        .owner          = THIS_MODULE,
        .read           = etx_read,
        .write          = etx_write,
        .open           = etx_open,
        .release        = etx_release,
};
 
static int etx_open(struct inode *inode, struct file *file)
{
        printk(KERN_INFO "Device File Opened...!!!\n");
        return 0;
}
 
static int etx_release(struct inode *inode, struct file *file)
{
        printk(KERN_INFO "Device File Closed...!!!\n");
        return 0;
}
 
static ssize_t etx_read(struct file *filp, 
                char __user *buf, size_t len, loff_t *off)
{
        printk(KERN_INFO "Read function\n");
 
        return 0;
}
static ssize_t etx_write(struct file *filp, 
                const char __user *buf, size_t len, loff_t *off)
{
        printk(KERN_INFO "Write Function\n");
        return len;
}
 
static int __init etx_driver_init(void)
{
        /*Allocating Major number*/
        if((alloc_chrdev_region(&dev, 0, 1, "etx_Dev")) <0){
                printk(KERN_INFO "Cannot allocate major number\n");
                return -1;
        }
        printk(KERN_INFO "Major = %d Minor = %d \n",MAJOR(dev), MINOR(dev));
 
        /*Creating cdev structure*/
        cdev_init(&etx_cdev,&fops);
 
        /*Adding character device to the system*/
        if((cdev_add(&etx_cdev,dev,1)) < 0){
            printk(KERN_INFO "Cannot add the device to the system\n");
            goto r_class;
        }
 
        /*Creating struct class*/
        if((dev_class = class_create(THIS_MODULE,"etx_class")) == NULL){
            printk(KERN_INFO "Cannot create the struct class\n");
            goto r_class;
        }
 
        /*Creating device*/
        if((device_create(dev_class,NULL,dev,NULL,"etx_device")) == NULL){
            printk(KERN_INFO "Cannot create the Device \n");
            goto r_device;
        }
 
        
        /* Creating Thread 1 */
        etx_thread1 = kthread_run(thread_function1,NULL,"eTx Thread1");
        if(etx_thread1) {
            printk(KERN_ERR "Kthread1 Created Successfully...\n");
        } else {
            printk(KERN_ERR "Cannot create kthread1\n");
             goto r_device;
        }
 
         /* Creating Thread 2 */
        etx_thread2 = kthread_run(thread_function2,NULL,"eTx Thread2");
        if(etx_thread2) {
            printk(KERN_ERR "Kthread2 Created Successfully...\n");
        } else {
            printk(KERN_ERR "Cannot create kthread2\n");
             goto r_device;
        }
	 
        etx_thread3 = kthread_run(thread_function3,NULL,"eTx Thread3");
        if(etx_thread3) {
            printk(KERN_ERR "Kthread3 Created Successfully...\n");
        } else {
            printk(KERN_ERR "Cannot create kthread3\n");
             goto r_device;
        }
	
        etx_thread4 = kthread_run(thread_function4,NULL,"eTx Thread4");
        if(etx_thread4) {
            printk(KERN_ERR "Kthread4 Created Successfully...\n");
        } else {
            printk(KERN_ERR "Cannot create kthread4\n");
             goto r_device;
        }
        
        etx_thread5 = kthread_run(thread_function5,NULL,"eTx Thread5");
        if(etx_thread5) {
            printk(KERN_ERR "Kthread5 Created Successfully...\n");
        } else {
            printk(KERN_ERR "Cannot create kthread5\n");
             goto r_device;
        }
	//Dynamic method to initialize the read write spinlock
        //rwlock_init(&etx_rwlock);
        
        printk(KERN_INFO "Device Driver Insert...Done!!!\n");
    return 0;
 
 
r_device:
        class_destroy(dev_class);
r_class:
        unregister_chrdev_region(dev,1);
        cdev_del(&etx_cdev);
        return -1;
}
 
void __exit etx_driver_exit(void)
{
        kthread_stop(etx_thread1);
        kthread_stop(etx_thread2);
	kthread_stop(etx_thread3);
	kthread_stop(etx_thread4);
	kthread_stop(etx_thread5);	
        device_destroy(dev_class,dev);
        class_destroy(dev_class);
        cdev_del(&etx_cdev);
        unregister_chrdev_region(dev, 1);
        printk(KERN_INFO "Device Driver Remove...Done!!\n");
}
 
module_init(etx_driver_init);
module_exit(etx_driver_exit);
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("EmbeTronicX <embetronicx@gmail.com>");
MODULE_DESCRIPTION("A simple device driver - RW Spinlock");
MODULE_VERSION("1.19");