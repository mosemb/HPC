#include <iostream>

using namespace std;

class Dog{
    private: 
            string name;
            int license; 

    public:
            Dog();
            Dog(string name);
            Dog(int license);
            Dog(string name, int license);
            void setName(string name);
            string getName();
            void setLicense(int license);
            int getLicense();
};

Dog::Dog(){
    name = "NA";
    license = 0;
}

Dog::Dog(string name){
    this->name = name;
    license = 0; 
}

Dog::Dog(int license){
    this->license = license;
    name = "NA";
}

 Dog::Dog(string name, int license){
     this->name = name;
     this->license = license;
 }

 void Dog::setName(string name){
     this->name = name;
 }

string Dog::getName(){
    return name;
}

void Dog::setLicense(int license){
    this->license = license;
}

int Dog::getLicense(){
    return license;
}

