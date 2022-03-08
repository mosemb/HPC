#include <stdio.h>
#include <iostream>

int main(void){

    int array[5];


    printf("Please enter 10 numbers that are integers :\n");
    for(int i=0; i<5; i++){
        scanf("%d",&array[i]);
    }

    printf("\n The entered numbers are :\n");
    for(int j=0; j<5; j++){
        printf("%d \n",array[j]);
    }

    
    // Reverse the array 
    printf("\n Print array in reverse order :\n");
    for(int k = 4; k>=0; k--){
        printf("%d \n", array[k]);
    }

    // Sort the array 

    for(int i = 0; i<5; i ++){

        for(int j =0; j<5-i; j++){

            if(array[j] > array[j+1]){

               int temp; 
               temp = array[j];
               array[j] = array[j+1];
               array[j+1] = temp;
            
            }

        }
    }

    printf("\n Sorted array \n");

    for(int i =0; i<5; i++){
        printf("\n %d \n",array[i]);

    }

    // Find the location of an element in the array in the sorted array

    printf(" \n");
    int searchkey, location; 
    searchkey=7;
    for(int i = 0; i<5; i++){
        if(array[searchkey] == array[i]){
            printf("Element %d found at location %d \n", array[searchkey],i);
        }
    }
    



    return 0;
}