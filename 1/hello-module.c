#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("Ilya Rube License v1.0");
MODULE_AUTHOR("Ilya Rube");
MODULE_DESCRIPTION("Linux kernel module. Module 5, task 1");

static int __init hello_init(void)
{
    printk(KERN_INFO "Task 1: module loaded by Ilya Rube.\n");
    return 0;
}

static void __exit hello_cleanup(void)
{
    printk(KERN_INFO "Task 1: module unloaded by Ilya Rube.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);