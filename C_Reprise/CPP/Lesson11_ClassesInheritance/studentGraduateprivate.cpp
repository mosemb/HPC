#include "studentGraduateprivate.hpp"



int main(void){
    Graduate graduate; 
    graduate.setStudentId(4567);
    graduate.setDegree("Robotics ");

    cout<<"The id is :"<<graduate.getStudentid()<<" The degree is :"<<graduate.getDegree()<<"\n";

}