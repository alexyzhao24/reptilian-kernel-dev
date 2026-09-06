#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alex Zhao");
MODULE_DESCRIPTION("Reptilian OS Kernel Module - Starter Test");
MODULE_VERSION("0.1");

static int __init hello_kernel_init(void) {
    pr_info("Reptilian Kernel: Module loaded successfully.\n");
    return 0;
}

static void __exit hello_kernel_exit(void) {
    pr_info("Reptilian Kernel: Module unloaded successfully.\n");
}

module_init(hello_kernel_init);
module_exit(hello_kernel_exit);