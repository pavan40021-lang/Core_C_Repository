#include <stdio.h>

static int clamp_to_range(int value, int minimum, int maximum)
{
    if (value < minimum) {
        return minimum;
    }

    if (value > maximum) {
        return maximum;
    }

    return value;
}

int main(void)
{
    int raw_level = 144;
    int bounded_level = clamp_to_range(raw_level, 0, 100);
    printf("bounded_level = %d\n", bounded_level);
    return 0;
}
