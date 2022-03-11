#include <stdio.h>
#include <iostream>


using namespace std;

int main(void){

    enum MONTH_TYPE {
        JAN, FEB, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCT,NOV,DEC
    };

    MONTH_TYPE bestmoth;

    if(bestmoth == JAN){
        printf("Best month is  January \n");
    }

    return 0;
}
