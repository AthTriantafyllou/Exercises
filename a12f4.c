/*File: a28f4.c
askisi 28 apo to filadio 4
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>
#include <stdbool.h>


//prototipa sinartisewn
long Parag(int arithmos);
double calculate_sinx(double x);


int main(){

    int arithmos;
    long parago;
    double x,sinx;

    printf("dose arithmo mikrotero apo 12: ");
    arithmos=GetInteger();

    parago=Parag(arithmos);
    printf("paragontikos arithmos: %ld\n",parago);


    printf("dose arithmos se aktinia: ");
    x = GetReal();
    sinx=calculate_sinx(x);
    printf("sinx: %.10f\n",sinx);


    return 0;
}


long Parag(int arithmos){

    int parago,i;

    parago=1;

    for (i=1;i<=arithmos;++i){
        parago=parago*i;
    }

    return parago;

}


double calculate_sinx(double x){

    double sinx;
    bool flag;
    int n;

    flag=false;
    n=-1;
    sinx=0;

    while(flag==false && n<=9){
        n=n+2;
        sinx=sinx + (pow(x,n)/n);
        if (sinx<0.0001){
            flag=true;
        }
        else{
            n=n+2;
            sinx=sinx - (pow(x,n)/n);
        }
        if (sinx<0.0001){
            flag=true;
        }
    }

    printf("n: %d\n",n);


    return sinx;
}

