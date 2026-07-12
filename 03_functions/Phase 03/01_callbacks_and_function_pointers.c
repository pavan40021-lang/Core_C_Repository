#include <stdio.h>

typedef int (*transform_fn)(int);

static int increment(int value) { return value + 1; }
static int square(int value) { return value * value; }

static int run_transform(transform_fn fn, int value)
{
    return fn(value);
}

int main(void)
{
    printf("increment = %d\n", run_transform(increment, 7));
    printf("square = %d\n", run_transform(square, 7));
    return 0;
}
