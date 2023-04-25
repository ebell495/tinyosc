#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../tinyosc.h"

u_int8_t buffer[8196];

int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size)
{
    memset(buffer, 0, 8196);
    memcpy(buffer, Data, Size);
    if (tosc_isBundle(buffer))
    {
        tosc_bundle bundle;
        tosc_parseBundle(&bundle, buffer, Size);
        tosc_message osc;
        while (tosc_getNextMessage(&bundle, &osc))
        {
        }
    }
    // else
    // {
    //     tosc_message osc;
    //     tosc_parseMessage(&osc, Data, Size);
    // }
}