/*File: a10f5.c
askisi 10 apo to filadio 5
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>


int main(){

    int i,j;
    long ArithmosKelion,siskeues;

    //pinakas
    #define ArithmosGrammon 4
    #define ArithmosStilon 2
    long SIS[ArithmosGrammon][ArithmosStilon];
    for (i=0;i<ArithmosGrammon;++i){
        SIS[i][1]=0;
    }
    SIS[0][0]=1;
    SIS[1][0]=5;
    SIS[2][0]=20;
    SIS[3][0]=50;


    printf("Dose plithos siskeuwn: ");
    siskeues=GetLong();


    //pinakas anathesi stoixeiwn
    while (siskeues!=0){
        if (siskeues/50!=0){
            SIS[3][1]=siskeues/50;
            siskeues=siskeues%50;
        }
        else if (siskeues/20!=0){
            SIS[2][1]=siskeues/20;
            siskeues=siskeues%20;
        }
        else if (siskeues/5!=0){
            SIS[1][1]=siskeues/5;
            siskeues=siskeues%5;
        }
        else{
            SIS[0][1]=siskeues;
            siskeues=siskeues%1;
        }
    }

    //ektiposi pinaka kai apotelesmaton
    for (i=0;i<ArithmosGrammon;++i){
        printf("%2ld",SIS[i][0]);
        printf("%5ld",SIS[i][1]);
        printf("\n");
    }




    return 0;
}
