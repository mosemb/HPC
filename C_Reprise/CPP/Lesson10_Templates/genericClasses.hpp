#include <iostream>
using namespace std; 

template <class T>
class StudentRecords{

    private:
           const int size = 5; 
           T grade; 
           int studentId; 

    public:
          StudentRecords(T input);
          void setId(int studentID);
          void printRecords();      
};


template <class T>
StudentRecords<T>::StudentRecords(T input){
    grade = input;
}

template <class T>
void StudentRecords<T>::setId(int studentID){
    studentId = studentID;
}

template <class T> 
void StudentRecords<T>::printRecords(){
    cout<< "ID "<< studentId << " Grade " << grade << "\n";
}