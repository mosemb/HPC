#include "studentGraduate.hpp"


int main(void){

    Graduate graduate; 
    graduate.setId(3456);
    graduate.setDegree("MSCE"); 

    cout<<"The id is :"<<graduate.getId()<<" The degree is :"<<graduate.getDegree()<<"\n";
    
}