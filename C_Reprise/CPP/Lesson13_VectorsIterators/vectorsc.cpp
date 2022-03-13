#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std; 


int main(void){


    vector<int> vectorInts;
    printf("Vector size %d: \n",vectorInts.size());

    // Resize
    vectorInts.resize(6);
    printf("Vector size %d: \n",vectorInts.size());


    // vectors can take in any data types 
    vector<float> vectorFloats; 
    printf("Vector size %d: \n",vectorFloats.size());

    vectorFloats.resize(10); 
    printf("Vector size %d: \n",vectorFloats.size());

    






    return 0; 
}