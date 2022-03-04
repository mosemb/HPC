#include <stdio.h>

int main(void){


    int size; 
    scanf("%i",&size);

    for(int i = 0; i<size; i++){

        for(int j=0; j<size; j++){
            printf("*");
        }

        printf("\n");
    }
}