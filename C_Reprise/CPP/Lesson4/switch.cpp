#include <iostream>
#include <stdio.h>

using namespace std;


int main(void){

    int maintest = 10;

    switch (maintest)
    {
    case (10)/* constant-expression */:
        /* code */
        cout << " This is a ten" << "\n";
        break;
    case (6):
         cout << "This is the greatest of all " << "\n";
         break;    
    
    default:
        break;
    }
}