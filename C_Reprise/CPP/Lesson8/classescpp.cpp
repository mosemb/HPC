#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Student
{

    string name;
    int id;
    int gradeDate;

public:
    void setName(string thename);
    void setId(int theid);
    void setGradeDate(int thegradeDate);
    string getName();
    int getId();
    int getDate();
    void print();

    // void setName(string thename){
    // name = thename;
};

void Student::setName(string thename)
{
    name = thename;
}

void Student::setId(int theid)
{
    id = theid;
}

void Student::setGradeDate(int thegradeDate)
{
    gradeDate = thegradeDate;
}

string Student::getName()
{
    return name;
}

int Student::getId()
{
    return id;
}

int Student::getDate()
{
    return gradeDate;
}

void Student::print()
{
    //printf("\n Student name %s StudentId %d Student gradeDate %d \n", &name, id, gradeDate);

    cout<< "Student name :"<<name <<" Student id :"<<id<< " Grade date :"<<gradeDate<< "\n";
}

int main(void)
{

    Student Student1;

    Student1.setName("Lukaaya James");
    Student1.setId(456689);
    Student1.setGradeDate(2019);

    // Print the values out for the particular student
    Student1.print();

    return 0;
}
