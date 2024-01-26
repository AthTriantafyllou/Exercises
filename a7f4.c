/*File: a28f4.c
askisi 28 apo to filadio 4
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>
#include <stdbool.h>


//prototipa sinartisewn
int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
int divd(int x, int y);


int main(){

    int x, y , add1, sub1, mult1, divd1, exp11, exp21;

    printf("dose ton 1o arithmo: ");
    x=GetInteger();
    printf("dose ton 2o arithmo: ");
    y=GetInteger();


    add1=add(x,y);
    printf("add: %d\n",add1);

    sub1=sub(x,y);
    printf("sub: %d\n",sub1);

    mult1=mult(x,y);
    printf("mult: %d\n",mult1);

    divd1=divd(x,y);
    printf("divd: %d\n",divd1);

    exp11=mult(add(x,y),sub(y,divd(x,y)));
    printf("exp1: %d\n",exp11);

    exp21=divd(sub(mult(x, y), x), add(x, y));
    printf("exp2: %d\n",exp21);




    return 0;
}


int add(int x, int y){

    int ath;

    ath=x+y;

    return ath;

}


int sub(int x, int y){

    int af;

    af=x-y;


    return af;
}


int mult(int x, int y){

    int poll;

    poll=x*y;

    return poll;
}

int divd(int x, int y){

    int die;

    die=x/y;

    return die;
}






