#include <stdio.h>

int main(void)
{
    int power_good = 1;
    int thermal_ok = 1;
    int comms_ok = 0;

    if (power_good && thermal_ok && comms_ok) {
        puts("all conditions passed");
    } else {
        puts("at least one gate failed");
    }

    printf("selected=%d\n", power_good || thermal_ok);
    return 0;
}
