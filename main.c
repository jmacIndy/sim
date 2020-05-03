#include <stdio.h>

#include "cpu.h"
#include "memory.h"

int main(int argc, char * argv[]) {

    char menu_option;

    printf("CPU SIMULATOR\n");

    do {
        printf("Menu:\n");

        printf("1. Load a program\n");
        printf("2. Run program\n");
        printf("3. Print Memory\n");
        printf("4. Print CPU\n");
        printf("X. Quit\n");
        printf("Enter an option: ");

        scanf(" %c", &menu_option);

        switch(menu_option) {

            case '1':
                initMemory();
                break;
            case '2':
                initCPU();
                break;
            case '3':
                printMemory();
                break;
            case '4':
                printCPU();
                break;
            case 'X':
                break;
            default:
                printf("Invalid input. Try again!\n");
                break;
        }
    } while (menu_option != 'X');

    return 0;
    
}