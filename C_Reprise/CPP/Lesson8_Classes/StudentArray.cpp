#include "StudentArray.hpp"
#include <stdio.h>


int main(void){

    Student student1;
    student1.setGrade(0,51);
    student1.setGrade(1,010);
    student1.setGrade(2,100);
    student1.setGrade(3,56);
    student1.setId(4453);

    Student course[3];
    course[0].setGrade(0,56);
    course[0].setGrade(1,67);
    course[0].setGrade(2,88);
    course[0].setGrade(3,89);
    course[0].setId(4569);

    

    int avg2 = course[0].getAverage();


    int avg = student1.getAverage();
    printf("Student avg %d \n",avg2);




}