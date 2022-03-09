#include <stdlib.h>
#include <stdio.h>
#include <iostream>


int searcharr(int *arr, int search);

int main(void){

    int arr[] = { 34,45,56,89};
    int search = 45; 
    
    int element = searcharr(arr,search);

    printf("%d \n", element);
    return 0;
}

int searcharr(int *arr, int search){

    int found = -1;

      for(int i =0; i<4; i++){

        if(arr[i]==search){

            printf("Element found at position %d \n",i);
            found = i;
        }

    }

 

    return found;

}