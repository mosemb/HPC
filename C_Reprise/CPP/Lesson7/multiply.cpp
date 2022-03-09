#include <stdio.h>
#include <iostream>


int multilpy(int m1, int m2);
int main(void){

    int result =  multilpy(3,4);
    printf("Result %d \n",result);

}

int multilpy(int m1, int m2){
    int product = m1*m2;
    return product;
}

