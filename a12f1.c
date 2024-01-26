/* File: a12f1
askisi 12 filadio 1
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


int main(){

    //dilosi
    float DT , DF;
    int kathara_tm , mikta_tm;

    //eisodos
    printf("Dose kathara tm: ");
    kathara_tm = GetReal();
    printf("Dose mikta tm: ");
    mikta_tm = GetReal();

    //ipologismos
    DT = (kathara_tm * 1.33 * 61.0) / 365.0;
    DF = (mikta_tm * 0.13 * 61.0) / 365.0;

    //emfanisi
    printf("DT: %.2f\n", DT);
    printf("DF: %.2f\n", DF);







    return 0;

}
