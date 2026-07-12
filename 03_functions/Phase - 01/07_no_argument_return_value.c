#include <stdio.h>

static int read_boot_state(void)
{
    return 1;
}

int main(void)
{
    printf("boot_state=%d\n", read_boot_state());
    return 0;
}
