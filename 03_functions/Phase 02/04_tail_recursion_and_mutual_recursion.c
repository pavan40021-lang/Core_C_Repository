#include <stdio.h>

static int is_even(int value);
static int is_odd(int value);

static int is_even(int value)
{
    if (value == 0) {
        return 1;
    }
    return is_odd(value - 1);
}

static int is_odd(int value)
{
    if (value == 0) {
        return 0;
    }
    return is_even(value - 1);
}

int main(void)
{
    printf("even=%d odd=%d\n", is_even(8), is_odd(7));
    return 0;
}
