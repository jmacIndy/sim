#include <stdbool.h>

#include "execute.h"

void executeCode(void) {

    unsigned char opCode;

    bool notHalted = true;

/*
    1 = MOV
    2 = DB
    3 = ADD
    4 = SUB
    5 = INC
    6 = DEC
    7 = MUL
    8 = DIV
    9 = AND
    10 = OR
    11 = XOR
    12 = NOT
    13 = SHL
    14 = SHR
    15 = CMP
    16 = JC
    17 = JNC
    18 = JZ
    19 = JNZ
    20 = JA
    21 = JNBE
    22 = JAE
    23 = JNB
    24 = JB
    25 = JNAE
    26 = JBE
    27 = JNA
    28 = JE
    29 = JNE
    30 = CALL
    31 = RET
    32 = PUSH
    33 = POP
    0 = HLT
*/

    while (notHalted) {

        opCode = readMemory(PC);

        switch (opCode) {

            case 0:
                notHalted = false;
                break;

            case 1:
                break;

            default:
                printf("ERROR: Bad Opcode. HALTING!\n");
                notHalted = false;
                break;
        }

        incrementPC();

    }
}