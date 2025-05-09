#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>



MODULE_LICENSE("GPL");

MODULE_AUTHOR("Nathan Hoffman");

MODULE_DESCRIPTION("A simple module to display text!");


MODULE_VERSION("0.1");

static char *charParameter = "default";
static int intParameter = 0;

module_param(intParameter, int, 0644);
module_param(charParameter, charp, 0644);

static int __init developer_info(void)
{
    printk(KERN_INFO "Hello, I am Nathan Hoffman, student of ASU %s %d", charParameter, intParameter);
    return 0;
}


static void __exit hello_end(void)
{
    printk(KERN_INFO "\n");
}

module_init(developer_info);
module_exit(hello_end);
