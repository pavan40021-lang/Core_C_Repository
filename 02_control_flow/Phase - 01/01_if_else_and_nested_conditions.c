#include <stdio.h>

int main(void)
{
    int supply_mv = 3320;
    int minimum_mv = 3300;
    int fault_flag = 0;

    if (fault_flag) {
        puts("fault path");
    } else {
        if (supply_mv >= minimum_mv) {
            puts("supply within range");
        } else {
            puts("supply below range");
        }
    }

    return 0;
}
