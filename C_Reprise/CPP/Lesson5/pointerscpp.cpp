#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){

    int val = 50;


    // Pointer to val 
    int *valPointer = &val;
    cout << &val << " Address of val \n";          // Address of val
    cout << *valPointer  << " Derefrence val of valPointer \n";  // Dereference operator 




    return 0;
}