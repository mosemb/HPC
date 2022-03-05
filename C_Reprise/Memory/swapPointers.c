#include <stdio.h>


void swap(int *a, int *b);

int main(void){

    int x = 1;
    int y = 2; 

    printf("Value %d \n",x);
    printf("Value %d \n",y);
}

void swap(int *a, int *b){

    // When swapping values use pointers to the addresses. 
    int tmp = *a;
    *a  = *b; 
    *b = tmp;
}