#include "Student.hpp"
#include <stdio.h>


int main(void){

    Student student1;
    student1.setGrade(0,51);
    student1.setGrade(1,010);
    student1.setGrade(2,100);
    student1.setGrade(3,56);
    student1.setId(4453);

    int avg = student1.getAverage();
    printf("Student avg %d \n",avg);



}