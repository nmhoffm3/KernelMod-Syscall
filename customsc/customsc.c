#include <linux/kernel.h>

asmlinkage long __x64_sys_customsc(void)
{
    printk("This is the new system call Nathan Hoffman implemented.");
    return 0;
}