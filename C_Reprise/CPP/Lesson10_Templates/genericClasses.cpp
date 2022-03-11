#include  "genericClasses.hpp"



int main(void){

    StudentRecords<string> streca("B+");
    streca.setId(3456);
    streca.printRecords(); 

    StudentRecords<float> strecb(89.87);
    strecb.setId(8932);
    strecb.printRecords();

    StudentRecords<int> strecc(456);
    strecc.setId(32);
    strecc.printRecords();

    StudentRecords<char> strecd('A');
    strecd.setId(932);
    strecd.printRecords(); 



   return 0;
}