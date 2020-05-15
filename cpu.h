#ifndef CPU_H
#define CPU_H

#include <stdio.h>
#include <stdbool.h>

unsigned char A;
unsigned char B;
unsigned char C;
unsigned char D;
unsigned char SP;
unsigned char PC;

bool carryFlag;
bool zeroFlag;

void initCPU(void);
void printCPU(void);

void incrementPC(void);

#endif