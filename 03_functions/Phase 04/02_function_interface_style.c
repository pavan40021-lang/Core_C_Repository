#include <stdio.h>

typedef struct
{
    int code;
    int value;
} DeviceResult;

static DeviceResult read_device_value(int raw_value)
{
    DeviceResult result = { .code = 0, .value = raw_value };
    return result;
}

int main(void)
{
    DeviceResult result = read_device_value(88);
    printf("code=%d value=%d\n", result.code, result.value);
    return 0;
}
