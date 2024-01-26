/*File: a8f6.c
askisi 8 apo to filadio 6
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>


void Read_and_Save(int plithos, int p[]);
void Sixnotita(int plithos, int p[], int si[]);
void MegistiSixnotita(int arithmoi, int si[], int *megisto, int *megisti_six);
void ElaxistiSixnotita(int arithmoi, int si[], int *elaxisto, int *elaxisti_six);
void Print_Results(int si[], int arithmoi, int max, int max_six, int min, int min_six);

/*oi pikanes p kai si simvolizoun ta paidia(30)
 kai tis sixnotites ton arithmon(20) antistoixos*/



int main(){


    //dilosi
    int paidia[30],sixno[20],megisto,megisti_six,elaxisto,elaxisti_six,i,plithos,arithmoi;

    //times gia plithos mathitwn kai gia euros arithmon pou dexontai:
    plithos=30;
    arithmoi=20;

    //arxikopoiisi olwn twn timwn kai pinakon:
    for (i=0;i<plithos;i++){
        paidia[i]=0;
    }
    for (i=0;i<arithmoi;i++){
        sixno[i]=0;
    }
    megisto=0;
    megisti_six=0;
    elaxisto=0;
    elaxisti_six=31;


    //kalesma diadikaseon kai sinartisewn
    Read_and_Save(plithos,paidia);
    Sixnotita(plithos,paidia,sixno);
    MegistiSixnotita(arithmoi,sixno,&megisto,&megisti_six);
    ElaxistiSixnotita(arithmoi,sixno,&elaxisto,&elaxisti_six);
    Print_Results(sixno,arithmoi,megisto,megisti_six,elaxisto,elaxisti_six);






    return 0;
}


//diadikasies kai sinartiseis:
void Read_and_Save(int plithos, int p[]){

    int i;

    for (i=0;i<plithos;i++){
        printf("Dwse bathmo %d: ",i+1);
        p[i]=GetInteger();
    }

}


void Sixnotita(int plithos, int p[], int si[]){

    int i;

    for (i=0;i<plithos;i++){
        si[p[i]-1] += 1;
    }

}


void MegistiSixnotita(int arithmoi, int si[], int *megisto, int *megisti_six){

    int i;

    for(i=0;i<arithmoi;i++){
        if (si[i]>*megisti_six){
            *megisti_six=si[i];
            *megisto=i+1;
        }
    }


}





void ElaxistiSixnotita(int arithmoi, int si[], int *elaxisto, int *elaxisti_six){

    int i;


    for(i=0;i<arithmoi;i++){
        if(si[i]<*elaxisti_six){
            *elaxisti_six=si[i];
            *elaxisto=i+1;
        }
    }


}



void Print_Results(int si[], int arithmoi, int megisto, int megisti_six, int elaxisto, int elaxisti_six){

    int i;

    printf("Sixnotites bathmon:\n");

    for (i=0;i<arithmoi;i++){
        printf("%d: %d\n",i+1,si[i]);
    }

    printf("bathmos me tin megaliteri sixnotita: %d\n",megisto);
    printf("sixnotita: %d\n",megisti_six);
    printf("bathmos me tin mikroteri sixnotita: %d\n",elaxisto);
    printf("sixnotita: %d\n",elaxisti_six);

}



