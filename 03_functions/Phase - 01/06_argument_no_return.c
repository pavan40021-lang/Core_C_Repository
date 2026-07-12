#include <stdio.h>

static void log_temperature(int temperature_c)
{
    printf("temperature=%d C\n", temperature_c);
}

int main(void)
{
    log_temperature(27);
    return 0;
}
