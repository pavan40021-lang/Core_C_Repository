#include <stdio.h>

int main(void)
{
    int retry_counter = 0;
    while (retry_counter < 3) {
        printf("retry %d\n", retry_counter + 1);
        ++retry_counter;
    }

    for (int sample_index = 0; sample_index < 4; ++sample_index) {
        if (sample_index == 2) {
            continue;
        }
        printf("sample %d\n", sample_index);
    }

    return 0;
}
