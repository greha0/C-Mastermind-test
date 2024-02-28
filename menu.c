
#include "menu.h"
#include "color.h"
#include <stdio.h>

void menuIniz (){
    printf("+----------------------------------------+\n");
    printf("|  MASTER MIND                           |\n");
    printf("|                                        |\n");
    printf("|  Regole: Indovina il codice segreto!   |\n");
    printf("|  Hai 10 tentativi, 4 cifre, 5 simboli  |\n");
    printf("|  diversi da inserire.                  |\n");
    printf("|                                        |\n");
    printf("+----------------------------------------+\n\n");
}

void legenda(){
    printf("+---------------------------------+\n");

    //CYAN

    printf("|   1   | Cyan            |");
    CYAN;
    printf("   @   ");
    DEFAULT;
    printf("|\n");

    //PURPLE
    printf("|   2   | Purple          |");
    PURPLE;
    printf("   @   ");
    DEFAULT;
    printf("|\n");

    //MAGENTA
    printf("|   3   | Magenta         |");
    MAGENTA;
    printf("   @   ");
    DEFAULT;
    printf("|\n");

    //ORANGE
    printf("|   4   | Green           |");
    GREEN;
    printf("   @   ");
    DEFAULT;
    printf("|\n");

    //POSIZIONE ERRATA

    printf("|  -1   | Posto errato    |");
    RED;
    printf("   !   ");
    DEFAULT;
    printf("|\n");

    //CORRETTA
    printf("|   0   | Posto giusto    |");
    CORRECT;
    printf("   v   ");
    DEFAULT;
    printf("|\n");

    //CIFRA NON PRESENTE

    printf("|  -2   | Non presente    |");
    printf("   x   ");
    printf("|\n");

    printf("+---------------------------------+\n\n");
}