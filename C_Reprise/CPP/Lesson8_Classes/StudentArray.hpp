#include <iostream>
#include <stdio.h>

using namespace std;

class Student{
    
    private:
           int Grades[4];
           int id;

    public:
           Student();
           void setGrade(int index, int grade);
           void setId(int idinput);
           int getGrade(int index);
           int getId();
           int getAverage();
           ~Student();
};

Student::Student(){

    for(int i=0; i<4; i++){
        Grades[i] = 0;
    }

    id =0;
}

Student::~Student(){

    cout<<"Deleting object"<< "\n";

}

void Student::setGrade(int index, int grade){
    Grades[index] = grade;
}

void Student::setId(int idinput){
    id = idinput;
}

int Student::getGrade(int index){

    int grade;
    for(int i =0; i<4; i++){
        if(index ==i){

            grade =  Grades[i];
        }
    }
    
    return grade;
}

int Student::getId(){
    return id;
}


int Student::getAverage(){
    int sum=0;
    for(int i=0; i<4; i++){

        sum = sum+Grades[i];
    }

    if(sum==0){
        return 0;
    }else {
        int average = sum/4;

        return average;
    }

}