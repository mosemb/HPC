#include <iostream>
#include <stdio.h>

using namespace std;

class Cat {
    private:
            string name;
            string breed;
            int age;

    public: 
            Cat();  // Its called at object initialization
            void setName(string nameInput);
            void setBreed(string breedInput);
            void setAge(int ageInput);
            string getName();
            string getBreed();
            int getAge();
            void printInfo();
            ~Cat(); // Destructor, its called when the object goes out scope to free up memory. 
                    // Destructors take no parameters. 

};

Cat::Cat(){


    cout<<"Assigning inital values in the constructor\n";
    name = "Unknown";
    breed = "Unknown";
    age = 99;

}

Cat::~Cat(){
    cout<< "Deleting object \n";
}

void Cat::setName(string nameInput){
    name = nameInput;
}

void Cat::setBreed(string breedInput){
    breed = breedInput;
}

void Cat::setAge(int ageInput){
    age = ageInput;

}

string Cat::getName(){

    return name;
}

string Cat::getBreed(){
    return breed;
}

int Cat::getAge(){

    return age;

}

void Cat::printInfo(){

    cout<<"Name : "<<name<<" Breed :"<<breed<<" Age : "<<age<<"\n";

}