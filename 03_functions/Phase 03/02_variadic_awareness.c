#include <stdio.h>
#include <stdarg.h>

static int sum_values(int count, ...)
{
    va_list arguments;
    int total = 0;

    va_start(arguments, count);
    for (int index = 0; index < count; ++index) {
        total += va_arg(arguments, int);
    }
    va_end(arguments);

    return total;
}

int main(void)
{
    printf("total=%d\n", sum_values(4, 1, 2, 3, 4));
    return 0;
}
