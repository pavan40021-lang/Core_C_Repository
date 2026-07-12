#include <stdio.h>

static int scale_sample(int raw_sample)
{
    return raw_sample * 2;
}

int main(void)
{
    printf("scaled=%d\n", scale_sample(21));
    return 0;
}
