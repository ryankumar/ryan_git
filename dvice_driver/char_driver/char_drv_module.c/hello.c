// This is the normal tamplet of char device driver and open,read,write,realease function are used as dummy

#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h> // all file operations are defined here

//Called when a process tries to open the device file, like
// "cat /dev/mycharfile"

int fp_open(struct inode *pinode,struct file *pfile)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
    return 0;
 }

// Called when a process, which already opened the dev file, attempts to read from it
ssize_t fp_read(struct file *pfile,char __user *buff,size_t length,loff_t *offset)
{
  printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
  return 0;
}

//Called when a process writes to dev file: echo "hi" > /dev/hello

ssize_t fp_write(struct file *pfile,const char __user *buff,size_t length,loff_t *offset)
{
  printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
   return length;
}

// Called when a process closes the device file.

int fp_release(struct inode *pinode,struct file *pfile)
{
  printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
  return 0;
}

struct file_operations fops = {
   .open= fp_open,
   .read= fp_read,
   .write=fp_write,
   .release=fp_release
   };
// This function is called when the module is loaded
static __init int hello_init(void)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
    register_chrdev(61/*major number */,"simple_driver"/*driver name */,&fops /*file operation*/);
   return 0;
 }
//This function is called when the module is unloaded
 static __exit void hello_exit(void)
 {
   printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
   unregister_chrdev(61,"simple_driver");
 }

module_init(hello_init);
module_exit(hello_exit);

   
