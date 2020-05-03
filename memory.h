#ifndef MEMORY_H
#define MEMORY_H

#include <stdio.h>

#define MAX_MEMORY_SIZE 256

unsigned char memory[MAX_MEMORY_SIZE];

void initMemory(void);

void printMemory(void);

#endif