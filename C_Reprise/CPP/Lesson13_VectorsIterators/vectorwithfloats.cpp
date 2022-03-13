#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


void printelements(vector<float> vectorFloat);
void printelementsin(vector<int> vectorint);

int main(void){

    vector<float> vectorFloat; 
    
    printf(" Vector size %d \n", vectorFloat.size());
    vectorFloat.assign(5,8.8);
    printf(" Vector size %d \n", vectorFloat.size());


    printelements(vectorFloat);

    // Vector ints 
    vector<int> vectorInts; 
    vectorInts.assign(2,23); 
    printelementsin(vectorInts); // Printvalues 

   

}

void printelements(vector<float> vectorFloat){
    
    // Make iterator
    vector<float>::iterator it;

    // Iterate through the vector
    for(it=vectorFloat.begin(); it!=vectorFloat.end(); ++it){
        printf(" Element %f \n",*it);

    }
 
    }

    void printelementsin(vector<int> vectorint){

    // Make iterator
    vector<int>::iterator itInt; 
    printf(" Vector size %d \n", vectorint.size());

    // Add more elements to the vector using push_back()
    vectorint.push_back(23);
    vectorint.push_back(24);
    vectorint.push_back(25);
    vectorint.push_back(26);
    vectorint.push_back(27);
    vectorint.push_back(28);

    // Iterate 
     for(itInt=vectorint.begin(); itInt!=vectorint.end(); ++itInt){
        printf(" Element %d \n",*itInt);
    }
 
    }

    // Insert elements in a vector 

    void insertelements( vector<int> vectorint){
        
        vector<int>::iterator it; 
        



    }