#include <stdio.h>

static int compute_average(int lhs, int rhs);

static int compute_average(int lhs, int rhs)
{
    return (lhs + rhs) / 2;
}

int main(void)
{
    printf("average = %d\n", compute_average(12, 20));
    return 0;
}
