#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/usb.h>

static struct usb_device *device;

//probe function
//called on device insertion if and only if no other driver has beat us to the punch
static int pen_probe(struct usb_interface *interface, const struct usb_device_id *id)
{
	struct usb_host_interface *iface_desc;
	struct usb_endpoint_descriptor *endpoint;
	int i;
	iface_desc =interface->cur_altsetting;
	printk(KERN_INFO "[*] Sandisk pen drive (%04x:%04x) plugged\n",id->idVendor, id->idProduct);
	printk(KERN_INFO "pendrive i/f %d now probed.\n",iface_desc->desc.bInterfaceNumber);
	printk(KERN_INFO "ID->bNumEndpoints: %02X\n",iface_desc->desc.bNumEndpoints);
	printk(KERN_INFO "ID->bInterfaceClass: %02X\n",iface_desc->desc.bInterfaceClass);
	
	for(i=0; i < iface_desc->desc.bNumEndpoints; i++ )
	{
		endpoint= &iface_desc->endpoint[i].desc;
		
		printk(KERN_INFO "ED[%d]->bEndpointAddress: 0x%02X\n",i,endpoint->bEndpointAddress);
		printk(KERN_INFO "ED[%d]->bmAttributes: 0x%02X\n",i,endpoint->bmAttributes);
		printk(KERN_INFO "ED[%d]->wMaxPacketSize: 0x%04X (%d)\n",i, endpoint->wMaxPacketSize, endpoint->wMaxPacketSize);
	}
	
	device = interface_to_usbdev(interface);
	return 0; //return 0 indicates we will amnage this device
}
 
//disconnect
static void pen_disconnect(struct usb_interface *interface){
	
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
MODULE_DESCRIPTION("USB Pen registration driver");
