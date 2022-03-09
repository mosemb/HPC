#include <stdio.h>
#include <iostream>
#include <stdlib.h>



using namespace std;

void arrayPointer(int * array);
void arrayWithSize(int array[4]);
void arrayWithoutSize(int array[]);

int main(void){

    int a[4] = {9,4,5,6};
    //int b[] = {8,12,23,34};

    arrayPointer(a);
    arrayWithSize(a);
    arrayWithoutSize(a);

    
    return 0;
}


void arrayPointer(int * arr){

    //int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<4; i++){
        printf("\n Pointer Array Elements %d \n",arr[i]);
    }
}

void arrayWithSize(int array[4]){

    // int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<4; i++){
        printf("\n Size Array Element %d \n",array[i]);
    }
    
}

void arrayWithoutSize(int array[]){

        //int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<4; i++){
        printf("\n No Size Element %d \n",array[i]);
    }

}


