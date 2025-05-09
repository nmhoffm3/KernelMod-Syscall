#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{
    long int shoutout = syscall(454);
    printf("%ld\n", shoutout);
    return 0;
}
