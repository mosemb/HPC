#include <iostream>
#include <sstream>
#include <stdio.h>

using namespace std; 

int main(void){

    string length; 
    string width; 
    float lengthfloat = 0;
    float widthfloat = 0;
    float area = 0;


    cout << "Please enter the length \n";
    getline(cin,length);
    stringstream(length) >> lengthfloat;
    cout << "Please enter the width \n";
    getline(cin, width);
    stringstream(width) >> widthfloat;
    area = lengthfloat*widthfloat;
    cout << "The area is " << area << "\n";
    


    return 0;
}