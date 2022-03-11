#include <iostream>
#include "PatientwithParams.hpp"

int main(void){

    Patient patient("James");
    string s = patient.getName();
    cout<<  s << endl;


    return 0;
}