#include "doginfo.hpp"
#include <iostream>

using namespace std; 


void printRoster(Dog roster[], int size);




void printRoster(Dog roster[], int size)
{
    for(int i=0; i<size; i++){
        roster[i].printInfo();
    }
}