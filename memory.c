#include "memory.h"

void initMemory(void) {

    for (int i = 0; i < MAX_MEMORY_SIZE; i++) {

        memory[i] = 0;

    }
}

void printMemory(void) {

    printf("Memory Contents:");

    for (int i = 0; i < MAX_MEMORY_SIZE; i++) {
        if ((i % 16) == 0) {

            printf("\n   %02X", i);
        }

        printf(" %02X", memory[i]);
    }

    printf("\n");
}