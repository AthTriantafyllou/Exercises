/*File: a11f4.c
askisi 11 apo to filadio 4
*/


#include <stdio.h>
#include "simpio.h"
#include "genlib.h"
#include <math.h>
#include <stdbool.h>


//prototipa sinartisewn
long Read_and_Calculate(int year);
bool Valide_Date(int day, int month,int year);
bool IsLeapYear(int year);





int main(){

    int year;
    long SUM_FPA;

    printf("current year? ");
    year=GetInteger();
    SUM_FPA=Read_and_Calculate(year);
    printf("SYNOLO FPA ---> %ld\n",SUM_FPA);

    return 0;
}


long Read_and_Calculate(int year){

    long FPA,SUM_FPA;
    int day,month,year1;
    bool apod;

    printf("day? ");
    day=GetInteger();

    while (day!=-1){

        printf("month? ");
        month=GetInteger();

        printf("year? ");
        year1=GetInteger();

        printf("FPA? ");
        FPA=GetInteger();

        if (year1==year){
            apod=Valide_Date(day,month,year1);
            if (apod==true){
                SUM_FPA=SUM_FPA+FPA;
            }
        }
        printf("day? ");
        day=GetInteger();
    }



    return SUM_FPA;

}

bool Valide_Date(int day, int month,int year){

    bool einai;

    einai=false;

    if (day>0 && day<32 && month>0 && month<13){
        if (month==2){
            if (IsLeapYear(year)){
                if (day<30){
                    einai=true;
                }
            }
            else{
                if (day<29){
                    einai=true;
                }
            }
        }
        else{
            if(month==1 ||month==3 ||month==5 ||month==7 ||month==8 ||month==10 ||month==12){
                    if (day<32){
                        einai=true;
                    }
            }
            else{
                if(day<31){
                    einai=true;
                }
            }

        }
    }

    return einai;

}



bool IsLeapYear(int year){

    return ( ((year % 4 == 0) && (year % 100 !=0)) || (year % 400 == 0) );

}








