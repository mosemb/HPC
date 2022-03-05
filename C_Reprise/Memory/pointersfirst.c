#include <stdio.h>



int main(void){

    int n = 50; 
    int *p = &n;  // The pointer stores the address of n. 

    printf("%p \n", p); // Prints out the address held by the pointer 
    printf("%i \n", *p );  // Prints out the value stored in the address using derefrence operator


}