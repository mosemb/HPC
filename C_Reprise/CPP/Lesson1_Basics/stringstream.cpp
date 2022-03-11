#include <iostream>
#include <stdio.h>
#include <sstream>

using namespace std; 

int main(void){

    // Converting a string to a float 
    string stringLength;
    float inches;
    float yardage;

    cout<< "Get the Inches \n";
    getline(cin,stringLength);
    stringstream(stringLength) >> inches;
    yardage = inches/36;
    cout << "The yardage is " << yardage << "\n";


    return 0;
}