#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std; 


int main(void){

    vector<int> vectorInt;  // create a vector;
    vector<int> :: iterator it;  // Vector iterator

    printf(" Vector size : %d \n",vectorInt.size());
    vectorInt.assign(8,9);   // Assign values 8, to 9 elements

    printf(" Vector size : %d \n",vectorInt.size());

    // Print out data from the vector 
    for(it=vectorInt.begin();it!=vectorInt.end(); ++it){

        printf("Element :%d \n",*it);
    }

    return 0; 
}