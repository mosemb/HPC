#include <stdio.h>
#include <iostream> 
using namespace std;

class Staff{

    private: 
          string title;
    
    public: 
          Staff();
          void setTitle(string title_);
          string getTitle();
};

Staff::Staff(){
    title = "NA";
}

void Staff::setTitle(string title_){
    title = title_;
}

string Staff::getTitle(){
    return title;
}

class GradStudent{

    private:
           int studentId;

    public: 
          GradStudent();
          void setStudentid(int studentid);
          int getStudentId();
};

GradStudent::GradStudent(){
    studentId = 0;
}

void GradStudent::setStudentid(int studentid){
    studentId = studentid;
}

int GradStudent::getStudentId(){
    return studentId;
}

class TA: public Staff, public GradStudent {

    private: 
            string supervisor; 
    public: 
            TA();
            void setSupervisor(string superv);
            string getSupervisor();
};

TA::TA(){
    supervisor = "UNKNOWN";
}

void TA::setSupervisor(string superv){
    supervisor = superv;
}

string TA::getSupervisor(){
    return supervisor;
    
}
