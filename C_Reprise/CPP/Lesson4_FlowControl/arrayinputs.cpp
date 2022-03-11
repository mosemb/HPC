#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){

    int vals[4];

    cout<< "First value " << "\n";
    cin >> vals[0];
    cout<< "Second value " << "\n";
    cin >> vals[1];
    cout<< "Third value " << "\n";
    cin >> vals[2];
    cout<< "Forth value " << "\n";
    cin >> vals[3];
    cout<< "Forth value " << "\n";
    cin >> vals[4];

    int sum = 0;
    for(int i=0; i<5; i++){
        sum = sum+vals[i];
    }

    float average; 
    average = sum/5;

    cout << "The average is " << average << "\n";
    


    return 0;
}