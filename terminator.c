#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_AUTHOR("Jairo Suarez");
MODULE_DESCRIPTION("modulo de prueba");
MODULE_VERSION("0.0.1");
MODULE_LICENSE("GPL");

static int greetings(void) {
    printk(KERN_NOTICE "Saludos Terricolas\n");
    return 0;
}

static void bye(void) {
    printk(KERN_NOTICE "Hasta la vista Baby!\n");
}

module_init(greetings);
module_exit(bye);
