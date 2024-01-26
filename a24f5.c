#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <math.h>

void GetData(int size, int p[]);
void PrintData(int size, int p[]);
void AddData(int size, int p[], int b[], int c[]);
void PrintResults(int size, double timi, double value1, double value2, double valueSum, int p[], int b[], int c[]);

//stin prosthesi kai ektiposi timon...
//o pinakas p einai to A
//o pinakas b einai to B
//o pinakas c einai to Sum

int main() {

    int degree;
    int coefficientsA[10], coefficientsB[10], coefficientsSum[10];
    int pinakas;
    double x, value1, value2, valueSum;

    //Ανάγνωση βαθμού πολυωνύμων
    printf("Ti vathmo exoyn ta polywnyma?\n");
    degree = GetInteger();


    //Ανάγνωση συντελεστών kai ektiposi polionimwn
    for (pinakas=1;pinakas<=2;pinakas++){
        if (pinakas==1){
            GetData(degree,coefficientsA);
            PrintData(degree,coefficientsA);
        }
        else{
            GetData(degree,coefficientsB);
            PrintData(degree,coefficientsB);
        }
    }

    //πρόσθεση πολυωνύμων
    AddData(degree,coefficientsA,coefficientsB,coefficientsSum);

    //Εκτύπωση αθροίσματος
    printf("athroisma polionimon:\n");
    PrintData(degree,coefficientsSum);


    //timi tou x
    printf("Dwse mia timi gia to x: ");
    x = GetReal();

    //ipologismos τιμών πολυωνύμων
    printf("times polionimon:\n");
    PrintResults(degree,x,value1,value2,valueSum,coefficientsA,coefficientsB,coefficientsSum);


    //ektiposi timwn
    printf("Value1: %g  Value2: %g  Value of Sum: %g", value1, value2, valueSum);

    return 0;
}

void GetData(int size, int p[]){

    int i;

    for(i=0; i<=size; i++) {
        printf("Eisagete to syntelesti tou orou %d: ", i);
        p[i] = GetInteger();
    }

}

void PrintData(int size, int p[]){

    int i;

    i=size;
    while(i>=1) {
        printf("%dx^%d + ", p[i], i);
        i--;
    }
    printf("%d\n", p[0]);

}

void AddData(int size, int p[], int b[], int c[]){

    int i;

    for(i=0; i<=size; i++) {
        c[i] = p[i] + b[i];
    }

}


void PrintResults(int size, double timi, double value1, double value2, double valueSum, int p[], int b[], int c[]){

    int i;

    value1 = 0;
    for(i=0; i<=size; i++){
        value1 += p[i]*pow(timi,(double)i);
    }


    value2 = 0;
    for(i=0; i<=size; i++){
        value2 += b[i]*pow(timi, (double)i);
    }


    valueSum = 0;
    for(i=0; i<=size; i++){
        valueSum += c[i]*pow(timi, (double)i);
    }


}

