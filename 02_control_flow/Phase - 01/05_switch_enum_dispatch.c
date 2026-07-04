#include <stdio.h>

typedef enum
{
    EVENT_BOOT,
    EVENT_SAMPLE,
    EVENT_TRANSMIT
} EventType;

static const char *describe_event(EventType event_type)
{
    switch (event_type) {
        case EVENT_BOOT: return "boot";
        case EVENT_SAMPLE: return "sample";
        case EVENT_TRANSMIT: return "transmit";
    }

    return "unknown";
}

int main(void)
{
    printf("%s\n", describe_event(EVENT_SAMPLE));
    return 0;
}
