#include <stdio.h>

static unsigned int checksum_recursive(const unsigned char *buffer, size_t count)
{
    if (count == 0U) {
        return 0U;
    }

    return buffer[count - 1U] + checksum_recursive(buffer, count - 1U);
}

int main(void)
{
    const unsigned char bytes[] = { 10U, 20U, 30U, 40U };
    printf("checksum = %u\n", checksum_recursive(bytes, sizeof(bytes)));
    return 0;
}
