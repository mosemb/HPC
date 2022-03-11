#include <iostream>
#include <stdio.h>


using namespace std;
class Dog{

    string name;
    int linceNumber; 
    
public:
    Dog();
    ~Dog();
    void setName(string nameInput);
    void setLicenceNo(int licenceNo);
    string getName();
    int getLicenceNo();
    void printInfo();

};

Dog::Dog(){
    name = "Unknown";
}

Dog::~Dog(){
    
    cout<< "Deleting object "<< "\n";
}

void Dog::setName(string nameInput){
    name = nameInput;
}

void Dog::setLicenceNo(int licenceNo){
    linceNumber = licenceNo;
}

string Dog::getName(){
    return name;
}

int Dog::getLicenceNo(){
    return linceNumber;
}

void Dog::printInfo(){

    cout<< " Dog name :"<< name<<" Licence No :" << linceNumber << "\n";
}