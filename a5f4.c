/*File: a5f4.c
askisi 5 apo to filadio 4
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>
#include <stdbool.h>


//prototipa sinartisewn
int Sum_Cube(int arithmos);
bool IsArmstrong(int x);


int main(){

    int i;
    bool einai;

    for (i=1; i<1000; ++i){
        if (IsArmstrong(i)==true){
            printf("%d\n",i);
        }
    }

    return 0;
}


int Sum_Cube(int arithmos){

    int athrisma;

    if (arithmos<10){
        athrisma = pow(arithmos , 3);
    }
    else if (arithmos<100){
        athrisma = (pow((arithmos/10),3))+(pow((arithmos%10),3));
    }
    else if (arithmos<1000){
        athrisma = (pow((arithmos/100),3))+(pow(((arithmos/10)%10),3)) + (pow((arithmos%10),3));
    }

    return athrisma;


}


bool IsArmstrong(int x){

    int first_number;
    bool einai;

    first_number = x;

    if (Sum_Cube(x)==first_number){
        einai= true;
    }
    else{
        einai= false;
    }

    return einai;

}

