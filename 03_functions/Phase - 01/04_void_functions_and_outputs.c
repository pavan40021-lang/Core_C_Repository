#include <stdio.h>

static void print_header(const char *title)
{
    printf("== %s ==\n", title);
}

int main(void)
{
    print_header("core c");
    return 0;
}
