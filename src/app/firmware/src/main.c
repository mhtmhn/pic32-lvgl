#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include "definitions.h"

int main(void) {
    /* Initialize all modules */
    SYS_Initialize(NULL);

    while (true) {
        /* Maintain state machines of all polled MPLAB Harmony modules. */
        SYS_Tasks();
    }

    return ( EXIT_FAILURE);
}
