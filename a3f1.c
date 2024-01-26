/*File: a3f1.c
askisi 3 apo to filadio 1
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int main(){

    int siskeues , c1 , c5 , c20 , c50;

    //arxikopoiisi
    c1 = 0;
    c5 = 0;
    c20 = 0;
    c50 = 0;

    //eisodos
    printf("Dose plithos siskeuwn: ");
    siskeues = GetInteger();

    //ipologismos
    while (siskeues > 0){

        if (siskeues >= 50){
            siskeues = siskeues - 50;
            c50 = c50 + 1;
        }
        else if (siskeues >= 20){
            siskeues = siskeues - 20;
            c20 = c20 + 1;
        }
        else if (siskeues >= 5){
            siskeues = siskeues - 5;
            c5 = c5 + 1;
        }
        else{
            siskeues = siskeues - 1;
            c1 = c1 + 1;
        }
    }
    printf("50 %d\n", c50);
    printf("20 %d\n", c20);
    printf("5 %d\n", c5);
    printf("1 %d\n", c1);








    return 0;
}
