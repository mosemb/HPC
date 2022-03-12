#include "multipleInheritance.hpp"

int main(void){

    TA ta; 
    ta.setTitle("Physics TA"); 
    ta.setStudentid(4567);
    ta.setSupervisor("Joy Raymond");

    cout<<" Supervisor : "<<ta.getSupervisor()<<" Student id : "<<ta.getStudentId()<<" Title: "<<ta.getTitle() << "\n";

    return 0; 
}