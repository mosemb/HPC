#include <iostream>
#include <stdio.h>
using namespace std;

class Patient {

    private:
         string name;

    public:
           Patient(string name);
           void setName(string name);
           string getName();
};

Patient::Patient(string name){
    this->name = name;
}

void Patient::setName(string name){
    this->name = name;
}

string Patient::getName(){
    return name;
}