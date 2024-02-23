
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
    printf("+--------------------------+\n");

    //CYAN

    printf("|   c   | Cyan     |");
    CYAN;
    printf("   @   ");
    DEFAULT;
    printf("|\n");

    //PURPLE
    printf("|   p   | Purple   |");
    PURPLE;
    printf("   @   ");
    DEFAULT;
    printf("|\n");

    //MAGENTA
    printf("|   m   | Magenta  |");
    MAGENTA;
    printf("   @   ");
    DEFAULT;
    printf("|\n");

    //ORANGE
    printf("|   g   | Green    |");
    GREEN;
    printf("   @   ");
    DEFAULT;
    printf("|\n");

    printf("+--------------------------+\n\n");
}