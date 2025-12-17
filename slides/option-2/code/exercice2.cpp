#include<stdio.h>

int additionBete (int x, int y){
    //Contrat?
    while (y != 0){
        //Variant ?
        x = x + 1;
        y = y - 1;
    }
    return x;
}
