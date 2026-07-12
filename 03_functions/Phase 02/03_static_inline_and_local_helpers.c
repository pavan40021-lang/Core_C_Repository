#include <stdio.h>

static inline int square(int value)
{
    return value * value;
}

static int add_offset(int value)
{
    static int offset = 2;
    return value + offset;
}

int main(void)
{
    printf("square=%d offset=%d\n", square(6), add_offset(6));
    return 0;
}
