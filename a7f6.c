/*File: a7f6.c
askisi 7 apo to filadio 6
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>
#include <stdbool.h>

#define mines 3
#define poleis_e 5
#define poleis_c 2
#define timi_e 7.5
#define timi_c 7.5


//prototipa sinartisewn
void Read_and_Save(int Poleis, int Mines, double eis[Poleis][Mines], double timi);
void Middle_poli(int Poleis, int Mines, double eis[Poleis][Mines],double mid_poli[Poleis]);
void Middle_mina(int Poleis, int Mines, double eis[Poleis][Mines],double mid_mina[Mines]);
void Min_total(int Poleis, int Mines, double eis[Poleis][Mines], int *min_poli, int *min_minas,double *min);
void Print_total(int Poleis, int Mines, double eis[Poleis][Mines]);
void Print_results(int Poleis, int Mines, double mid_poli[Poleis], double mid_mina[Mines], int min_poli, int min_minas, double min);

//oti exei _e meta einai gia tin ellada. antistoixa to _c gia tin kipro

int main(){

    int min_poli_e,min_minas_e,min_poli_c,min_minas_c;
    double eis_e[poleis_e][mines],eis_c[poleis_c][mines];
    double mid_poli_e[poleis_e],mid_poli_c[poleis_c];
    double mid_mina_e[mines],mid_mina_c[mines];
    double min_e,min_c;

    //arxikopoiisi
    min_poli_e=0;
    min_minas_e=0;
    min_poli_c=0;
    min_minas_c=0;
    min_e=10000;
    min_c=10000;

    //diavasma kai apothikeusi gia ellada kai kipro
    printf("tickets in greece\n");
    Read_and_Save(poleis_e,mines,eis_e,timi_e);
    printf("tickets in cyprus\n");
    Read_and_Save(poleis_c,mines,eis_c,timi_c);



    //ellada oles oi sinartiseis:
    printf("cinema revenues in greece:\n");
    Middle_poli(poleis_e,mines,eis_e,mid_poli_e);
    Middle_mina(poleis_e,mines,eis_e,mid_mina_e);
    Min_total(poleis_e,mines,eis_e,&min_poli_e,&min_minas_e,&min_e);
    Print_total(poleis_e,mines,eis_e);

    printf("statistics in greece\n");
    Print_results(poleis_e,mines,mid_poli_e,mid_mina_e,min_poli_e,min_minas_e,min_e);




    //kipros oles oi sinartiseis:
    printf("cinema revenues in cyprus:\n");
    Middle_poli(poleis_c,mines,eis_c,mid_poli_c);
    Middle_mina(poleis_c,mines,eis_c,mid_mina_c);
    Min_total(poleis_c,mines,eis_c,&min_poli_c,&min_minas_c,&min_c);
    Print_total(poleis_c,mines,eis_c);

    printf("statistics in cyprus\n");
    Print_results(poleis_c,mines,mid_poli_c,mid_mina_c,min_poli_c,min_minas_c,min_c);




    return 0;
}


void Read_and_Save(int Poleis, int Mines, double eis[Poleis][Mines], double timi){

    int i,j;

    for(i=0;i<Poleis;i++){
        for(j=0;j<Mines;j++){
            printf("Give tickets: [%d][%d]:  ",i,j);
            eis[i][j]=(GetReal() * timi);
        }
    }

}



void Middle_poli(int Poleis, int Mines, double eis[Poleis][Mines],double mid_poli[Poleis]){

    int i,j;
    double sum;

    for(i=0;i<Poleis;i++){
        sum=0;
        for (j=0;j<Mines;j++){
            sum+=eis[i][j];
        }
        mid_poli[i]=sum/(double)Mines;
    }

}




void Middle_mina(int Poleis, int Mines, double eis[Poleis][Mines],double mid_mina[Mines]){


    int i,j;
    double sum1;

    for(j=0;j<Mines;j++){
        sum1=0;
        for (i=0;i<Poleis;i++){
            sum1+=eis[i][j];
        }
        mid_mina[j]=sum1/(double)Poleis;
    }

}




void Min_total(int Poleis, int Mines, double eis[Poleis][Mines], int *min_poli, int *min_minas,double *min){

    int i,j;

    for(i=0;i<Poleis;i++){
        for (j=0;j<Mines;j++){
            if (eis[i][j]<*min){
                *min=eis[i][j];
                *min_poli=i;
                *min_minas=j;
            }
        }
    }

}




void Print_total(int Poleis, int Mines, double eis[Poleis][Mines]){

    int i,j;

    for (i=0;i<Poleis;i++){
        printf("city %d: ",i);
        for(j=0;j<Mines;j++){
            printf("%7.2f",eis[i][j]);
        }
        printf ("\n");
    }

}




void Print_results(int Poleis, int Mines, double mid_poli[Poleis], double mid_mina[Mines], int min_poli, int min_minas, double min){

    int i,j;

    printf("cities average revenues\n");
    for (i=0;i<Poleis;i++){
        printf ("%d:%7.2f\n",i,mid_poli[i]);
    }

    printf("months avarage revenues\n");
    for (j=0;j<Mines;j++){
        printf ("month %d:%7.2f\n",j,mid_mina[j]);
    }

    printf("min revenue:%7.2f\n",min);
    printf("city: %d\n",min_poli);
    printf("month: %d\n",min_minas);



}




