#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


void printelements(vector<float> vectorFloat);
void printelementsin(vector<int> vectorint);
void insertelements( vector<int> vectorint);
void emplaceVector(vector<int> vectorInt);
void clearVector(vector<int>vectorclear);
void eraseVectorElements(vector<int> vectorElerase);
void popBack(vector<int> vectorPopback);

int main(void){

    vector<float> vectorFloat; 
    
    printf(" Vector size %d \n", vectorFloat.size());
    vectorFloat.assign(5,8.8);
    printf(" Vector size %d \n", vectorFloat.size());


    printelements(vectorFloat);

    // Vector ints 
    vector<int> vectorInts; 
    vector<int>::iterator it;
    vectorInts.assign(2,23); 
    printelementsin(vectorInts); // Printvalues 
    insertelements( vectorInts);
    emplaceVector(vectorInts);
    clearVector(vectorInts);
    eraseVectorElements(vectorInts);
    popBack(vectorInts);

    
    //it = vectorInts.begin()+1;
    //vectorInts.insert(it, -2);
    //vectorInts.insert(it,-3);

   

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
        // Inserts and prints elements at a particular location 

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

        // Inserts elements at a particular location in a vector 

        vector<int>::iterator it; 
        it = vectorint.begin();

        //vectorint.insert(it,-1);
        vectorint.insert(it, -2);
        it = vectorint.begin()+1;
        vectorint.insert(it,-3);
        it = vectorint.begin()+3;
        vectorint.insert(it,-45);

        for(it = vectorint.begin(); it!=vectorint.end(); ++it){
            printf("Element inserted %d \n", *it);
        }


    }


    void emplaceVector(vector<int>vectorInt){
        // Inserts elements inpace in a vector 

        vector<int>::iterator it;
        it = vectorInt.begin();
        vectorInt.emplace(it,-44);
        it = vectorInt.begin()+2; 
        vectorInt.emplace(it,-33);
        it = vectorInt.begin()+4;
        vectorInt.emplace(it,-55);

        for(it=vectorInt.begin(); it!=vectorInt.end(); ++it){
            printf("Element emplaced %d :\n",*it);
        }

    }

    void clearVector(vector<int>vectorclear){
        //Clears the vector of all items. 
        printf("The size of this vector is  %d: \n", vectorclear.size());
        
        vector<int>::iterator it;
        for(it=vectorclear.begin(); it!=vectorclear.end(); ++it){
            printf(" Value before clear %d \n",*it);
        }

        vectorclear.clear();
        printf("The size of this vector after clear is   %d: \n", vectorclear.size());
    }


    void eraseVectorElements(vector<int> vectorElerase){
        // Erases the element specified. 
         printf("Size of vector before erase is %d \n",vectorElerase.size());
         vectorElerase.erase(vectorElerase.begin());
         printf("Size of vector after erase is %d \n",vectorElerase.size());

    }


    void popBack(vector<int> vectorPopback){
         // Removes the last element of the vector 
         printf("\n");
         printf("Size of vector before popback is %d \n",vectorPopback.size());
         vectorPopback.pop_back();
         printf("Size of vector after popback is %d \n",vectorPopback.size());

    }




