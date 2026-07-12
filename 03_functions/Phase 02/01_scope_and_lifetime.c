#include <stdio.h>

static int g_run_count = 0;

static void execute_cycle(void)
{
    int local_counter = 1;
    ++g_run_count;
    printf("local_counter = %d, g_run_count = %d\n", local_counter, g_run_count);
}

int main(void)
{
    execute_cycle();
    execute_cycle();
    return 0;
}
