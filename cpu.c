#include "cpu.h"

void initCPU(void) {

    A = 0;
    B = 0;
    C = 0;
    D = 0;
    PC = 0;
    SP = 0; // needs to be max memory address
    carryFlag = false;
    zeroFlag = false;

}

void printCPU(void) {

    printf("CPU Status:\n");
    printf("   Register A = %02X\n", A);
    printf("   Register B = %02X\n", B);
    printf("   Register C = %02X\n", C);
    printf("   Register D = %02X\n", D);
    printf("   PC         = %02X\n", PC);
    printf("   SP         = %02X\n", SP);
}

