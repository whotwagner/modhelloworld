#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Wolfgang Hotwagner");
MODULE_DESCRIPTION("Just another Hello World Kernel Module");
MODULE_VERSION("0.1");

static int __init helloworld_init(void)
{
	printk(KERN_ALERT "Hello World \n");
	return 0;
}

static void __exit helloworld_exit(void)
{
	printk(KERN_ALERT "Good Bye World \n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);
 
