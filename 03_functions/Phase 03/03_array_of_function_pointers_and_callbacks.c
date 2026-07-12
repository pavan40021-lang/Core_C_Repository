#include <stdio.h>

typedef int (*handler_fn)(int);

static int increment(int value) { return value + 1; }
static int square(int value) { return value * value; }

int main(void)
{
    handler_fn handlers[] = { increment, square };
    printf("%d %d\n", handlers[0](6), handlers[1](6));
    return 0;
}
