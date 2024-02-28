//
// Created by I3AI3 on 28/02/2024.
//
#define DIM 4
#include "gameFunction.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randCode(int v[]){
    int i;
    srand(time(NULL));

    for(i=0; i<DIM; i++){
        v[i]=rand() % 4 + 1;
    }
}
