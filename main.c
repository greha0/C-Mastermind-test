
#include <stdio.h>

/*

 MASTER MIND
 Created by: Greta Maria Brugnatti
 Class: 3AII

 */

#include "color.h"
#include "menu.h"
#include "gameFunction.h"
#include <stdio.h>


#define DIM 4

int main (void){

    int pcCode[DIM];
    int tent; //tentativi
    int i;

    //inizializzazione

    randCode(pcCode);
    tent = 0;
    i = 0;

    menuIniz();

    do{
        printf("Tentativo %d\n", tent);
        do{

            i++;
        } while (i<DIM);
    } while (tent < 10);
}




