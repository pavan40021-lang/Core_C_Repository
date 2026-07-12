#include <stdio.h>

static int compute_bias(void)
{
    return 2;
}

int main(void)
{
    extern int printf(const char *format, ...);
    printf("bias=%d\n", compute_bias());
    return 0;
}
