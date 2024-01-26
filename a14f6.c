/*File: a14f6.c
askisi 14 apo to filadio 6
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>

#define paidia 30
#define mathimata 3



void Random_Grades(int Paidia, int Mathimata, int bath[Paidia][Mathimata]);
void Mesoi_Oroi(int Paidia, int Mathimata, int bath[Paidia][Mathimata], double mo[]);
void Print_Results(int Paidia, int Mathimata, int bath[Paidia][Mathimata], double mo[]);
void Posotites_Pososta(int Paidia, double mo[],int *arist,double *pos_arist,int *apot,double *pos_apot);

/*oi pikanes bath kai mo simvolizoun tous bathmous(0-20)
 kai tous mesous orous antistoixos*/






int main(){


    //dilosi
    int bath[paidia][mathimata],arist,apot,i,j;
    double mo[paidia],pos_arist,pos_apot;


    //arxikopoiisi olwn twn timwn kai pinakon:
    for (i=0;i<paidia;i++){
        mo[i]=0;
        for (j=0;j<mathimata;j++){
            bath[i][j]=0;
        }
    }
    arist=0;
    pos_arist=0;
    apot=0;
    pos_apot=0;


    //kalesma diadikaseon kai sinartisewn
    Random_Grades(paidia,mathimata,bath);
    Mesoi_Oroi(paidia,mathimata,bath,mo);
    Print_Results(paidia,mathimata,bath,mo);
    Posotites_Pososta(paidia,mo,&arist,&pos_arist,&apot,&pos_apot);



    printf("Apotyxontes: %d\n",apot);
    printf("Pososto apotixonton: %.2f\n",pos_apot);
    printf("Aristouxoi: %d\n",arist);
    printf("Pososto aristouxon: %.2f\n",pos_arist);



    return 0;
}



void Random_Grades(int Paidia, int Mathimata, int bath[Paidia][Mathimata]){

    int i,j;

    for(i=0;i<Paidia;i++){
        for(j=0;j<Mathimata;j++){
            bath[i][j]=rand()%21;
        }
    }


}



void Mesoi_Oroi(int Paidia, int Mathimata, int bath[Paidia][Mathimata], double mo[]){

    int i,j,athrisma;
    double mesos;

    for(i=0;i<Paidia;i++){
        athrisma=0;
        for(j=0;j<Mathimata;j++){
            athrisma+=bath[i][j];
        }
        mo[i]=((double)athrisma)/3.0;
    }

}




void Print_Results(int Paidia, int Mathimata, int bath[Paidia][Mathimata], double mo[]){

    int i,j;

    for(i=0;i<Paidia;i++){
        printf("%2d:",i+1);
        for(j=0;j<Mathimata;j++){
            printf("%3d",bath[i][j]);
        }
        printf(" :%6.2f\n",mo[i]);
    }

}




void Posotites_Pososta(int Paidia, double mo[],int *arist,double *pos_arist,int *apot,double *pos_apot){

    int i,j;

    for(i=0;i<Paidia;i++){
        if (mo[i]>=18.5){
            *arist+=1;
        }
        else if(mo[i]<9.5){
            *apot+=1;
        }
    }

    *pos_arist=((double)*arist)*100.0/30.0;
    *pos_apot=((double)*apot)*100.0/30.0;


}

