#include <stdio.h>
#include <iostream>


int main(void){

    int fourdim[4][4] = {1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8};
    int onedim[4] = {2,2,2,2};
    int product[4];


    int sum = 0; 
    for(int i= 0; i<4; i++){
        for(int j=0; j<4;j++){

            sum = (fourdim[i][j]*onedim[i]) + sum;
        }

        product[i] = sum;
        sum=0;
    }

    printf("\n Sum %d \n",sum);


    for(int i = 0; i<4; i++){

        printf("\n %d \n",product[i]);
    }








    return 0; 
}