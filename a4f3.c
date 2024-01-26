/*File: a4f3.c
askisi 4 apo to filadio 3
*/



#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>



int main(){

    int kodikos, atoma, timi;
    long kostos, kerdos, sinol_eisp;
    // kostos einai to poso eisprakseos tis kathe kinisis
    //sinol_eisp einai to sinoliko poso eispraksewn

    timi = 350;
    sinol_eisp=0;

    printf("Dose kodiko: ");
    kodikos = GetInteger();
    while (kodikos!=2){
        if (kodikos!=1){
            printf("Lathos\n");
        }
        else{
            printf("Dose arithmo atomon: ");
            atoma = GetInteger();
            if (atoma<=10){
                kostos = timi * atoma;
            }
            else if(atoma> 10){
                kostos = (timi - ceil(timi*10/100)) * atoma;
            }
            else{
                printf("mi thetikos arithmos atomwn");
            }
            printf("Kostos: %ld\n", kostos);
            sinol_eisp= sinol_eisp + kostos;
        }
        printf("Dose kodiko: ");
        kodikos = GetInteger();
    }
    kerdos = sinol_eisp - 20000;
    printf("Kerdos: %ld",kerdos);





    return 0;
}

