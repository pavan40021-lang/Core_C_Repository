#include <stdio.h>

typedef struct
{
    int status;
    int value;
} Result;

static Result compute_measurement(int sample)
{
    Result result = { .status = 0, .value = sample * 2 };
    return result;
}

int main(void)
{
    Result result = compute_measurement(21);
    printf("status=%d value=%d\n", result.status, result.value);
    return 0;
}
