/*File: a23f5.c
askisi 23 apo to filadio 5
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>


int main(){

    int i,j,Arithmos_n,sum;

    //pinakes arxikopoiisi
    #define Arithmos_n 4
    int SetA[Arithmos_n];
    int SetB[Arithmos_n];
    int Final[Arithmos_n][Arithmos_n];

    //pinakes eisodos timon
    for (i=0;i<Arithmos_n;++i){
        printf("Insert SetA num %d : ",i);
        SetA[i]=GetInteger();
    }
    for (j=0;j<Arithmos_n;++j){
        printf("Inster SetB num %d : ",j);
        SetB[j]=GetInteger();
    }

    //athroisma
    sum=0;
    for (i=0;i<Arithmos_n;++i){
        sum=sum + SetA[i] + SetB[i];
    }
    printf("Sum: %d\n",sum);

    //pinakas dimiourgeia
    for(i=0;i<Arithmos_n;++i){
        for (j=0;j<Arithmos_n;++j){
            Final[i][j]=SetB[i] + SetA[j];
        }
    }

    //pinakas ektiposi
    for(i=0;i<Arithmos_n;++i){
        for (j=0;j<Arithmos_n;++j){
            printf("%5d",Final[i][j]);
        }
        printf("\n");
    }




    return 0;
}

