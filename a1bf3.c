/*File: a1bf3.c
askisi 1b apo to filadio 3
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>


int main(){

    long years , cars, orio;
    double rate;

    years=0;

    printf("dose ton arxiko arithmo autokinitwn: ");
    cars=GetLong();
    printf("dose ton etisio arithmo auksisis: ");
    rate=GetReal();
    printf("dose to orio: ");
    orio=GetLong();



    while(cars<=orio){
        cars=ceil(cars*(1+ 0.353));
        years=years+1;
    }

    printf("%ld\n", years);
    printf("%ld\n",cars);









    return 0;
}


