/*File: a1af3.c
askisi 1a apo to filadio 3
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>


int main(){

    long years , cars;

    years=0;
    cars=80000;

    while(cars<=160000){
        cars=ceil(cars*(1+ 7.0/100));
        years=years+1;
    }

    printf("%ld\n", years);
    printf("%ld\n",cars);









    return 0;
}

