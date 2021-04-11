/*

hello.c
 "Hello, world" - the kernel module virsion

*/

/* Necessary header files */

/* Standard in kernel modules */
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/modversions.h>
/* CONFIG_MODVERSIONS */

#if CONFIG_MODVERSION == 1
#define MODVERSIONS
#endif

/* Initialize the module */

int init_module(){
	printk("Hello, World. This is the kernel speaking\n");

	return 0; /* any other value than zero (0) means module failed */
}

/* Cleanup - undo whatever init_module did */

void cleanup_module(){
	printk("Short is the life of a kernel module\n");
}
