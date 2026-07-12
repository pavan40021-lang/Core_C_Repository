#include <stdio.h>

typedef struct
{
    int status;
    int reading;
} Result;

static Result compute_result(int input_value)
{
    Result result = { .status = 0, .reading = input_value * 2 };
    return result;
}

int main(void)
{
    Result result = compute_result(21);
    printf("status=%d reading=%d\n", result.status, result.reading);
    return 0;
}
