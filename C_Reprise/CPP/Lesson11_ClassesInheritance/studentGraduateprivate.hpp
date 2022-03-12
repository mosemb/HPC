#include <iostream>
#include <stdio.h>
using namespace std; 

class Student {
    private:
            int id;
    
    public: 
           Student();
           void setId(int ids);
           int getId();
}; 

Student::Student(){
    id = 0; 
}

void Student::setId(int ids){
    id = ids;
}

int  Student::getId(){
    return id;
}

class Graduate: private Student {

    private: 
           string degree; 

    public: 
            Graduate();
            void setDegree(string deg);
            string getDegree();
            void setStudentId(int ids);
            int getStudentid();

};

Graduate::Graduate(){
    degree = "undeclared";
}

void Graduate::setDegree(string deg){
    degree = deg;
}

string Graduate::getDegree(){
    return degree;
}

void Graduate::setStudentId(int ids){
    Student::setId(ids);
}

int Graduate::getStudentid(){
    return Student::getId();
}



