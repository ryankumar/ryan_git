#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/usb.h>

#define MIN(a,b) ((a) <= (b) ? (a) :(b))
#define BULK_EP_OUT 0x01 //MSB 0 means “out" i.e; data flow from host machine to usb device
#define BULK_EP_IN 0x82 //MSB 1 means "in" i.e; data flow from usb device to host machine
#define MAX_PKT_SIZE 512

/* usb_class_driver contains the suggested device file name and the set of device file operations.
   refere usb.h file for structure elements
 */
static struct usb_device *device;
static struct usb_class_driver class;
static unsigned char bulk_buf[MAX_PKT_SIZE];

static int pen_open(struct inode *i,struct file *f)
{
	return 0;
}

static int pen_close(struct inode *i, struct file *f)
{
	return 0;
}

static ssize_t pen_read(struct file *f, char __user *buf, size_t cnt, loff_t *off)
{
	int retval;
	int read_cnt;
	/* read the data from bulk endpoint */
	retval = usb_bulk_msg(device, usb_rcvbulkpipe(device,BULK_EP_IN), bulk_buf, MAX_PKT_SIZE, &read_cnt, 5000);
	if(retval)
	{
		printk(KERN_ERR "Bulk message from pendrive to host machine returned %d\n", retval);
		return retval;
	}
	if(copy_to_user(buf, bulk_buf, MIN(cnt,read_cnt)))
	{
		return -EFAULT;
	}
	return MIN(cnt, read_cnt);
}

static ssize_t pen_write(struct file *f, const char __user *buf, size_t cnt,loff_t *off)
{
	int retval;
	int wrote_cnt= MIN(cnt, MAX_PKT_SIZE);

	if(copy_from_user(bulk_buf, buf, wrote_cnt))
	{
		return -EFAULT;
	}

	/* write the data into the bulk endpoint */
	retval =usb_bulk_msg(device, usb_sndbulkpipe(device, BULK_EP_OUT),bulk_buf,wrote_cnt, &wrote_cnt, 5000);
	if(retval)
	{
		printk(KERN_ERR "Bulk message from host machine to pendrive returned %d\n", retval);
		return retval;
	}

	return wrote_cnt;
}

static struct file_operations fops =
{
	.open = pen_open,
	.release = pen_close,
	.read = pen_read,
	.write = pen_write,
};


//probe function
//called on device insertion if and only if no other driver has beat us to the punch
static int pen_probe(struct usb_interface *interface, const struct usb_device_id *id){
	int retval;
	device = interface_to_usbdev(interface);

	class.name = "usb/pen%d";
	class.fops = &fops;
	/*the minor number is assigned  from the USB core by calling usb_register_dev() for a interface */
	if((retval = usb_register_dev(interface, &class)) < 0)
	{
		/* Something prevented us from registering this driver */
		printk(KERN_ERR "not able to get a minor for this device.");
		return retval;
	}
	else
	{
		printk(KERN_INFO "minor obtained: %d\n", interface->minor);
	}

	return retval;
}

//disconnect
static void pen_disconnect(struct usb_interface *interface){

	usb_deregister_dev(interface, &class);
	printk(KERN_INFO "[*] Sandisk pendrive i/f %d now removed\n",interface->cur_altsetting->desc.bInterfaceNumber);
}

//usb_device_id
static struct usb_device_id pen_table[] ={
	//0781:558a
	{ USB_DEVICE(0x0781, 0x558a)},
	{}	/*terminating entry*/

};

MODULE_DEVICE_TABLE(usb, pen_table);

//usb_driver
static struct usb_driver pen_driver =
{
	name:	"Sandisk_pendrive",
	id_table: pen_table,
	probe:	pen_probe,
	disconnect: pen_disconnect,

};

static int __init pen_init(void ){
	int ret= -1;
	printk(KERN_INFO "[*] Sandisk pendrive constructor of driver");
	printk(KERN_INFO "\t Registering driver with kernel");
	ret=usb_register(&pen_driver);
	printk(KERN_INFO "\tRegistration is complete with ret value %d ",ret);
	return ret;
}

static void __exit pen_exit(void){
	printk(KERN_INFO "[*] sandisk pendrive destructor of driver");
	usb_deregister(&pen_driver);
	printk(KERN_INFO "\tunregisteration is complete");

}

module_init(pen_init);
module_exit(pen_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sandisk");
MODULE_DESCRIPTION("USB Pen device driver");
