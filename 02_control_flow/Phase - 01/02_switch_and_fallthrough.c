#include <stdio.h>

typedef enum
{
    MODE_BOOT,
    MODE_STANDBY,
    MODE_ACTIVE,
    MODE_FAULT
} SystemMode;

int main(void)
{
    SystemMode mode = MODE_ACTIVE;

    switch (mode) {
        case MODE_BOOT:
            puts("boot");
            break;
        case MODE_STANDBY:
            puts("standby");
            break;
        case MODE_ACTIVE:
            puts("active");
            break;
        case MODE_FAULT:
            puts("fault");
            break;
    }

    return 0;
}
