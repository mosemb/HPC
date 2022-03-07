#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){

    string fullName;
    string Address;

    cout<< "What is your name ? \n";
    getline(cin,fullName);
    cout << "Nice to meet you " << fullName << "\n";
    cout << "What is your Address ? \n";
    getline(cin,Address);
    cout << "Oh great you stay at " << Address << "\n";


}