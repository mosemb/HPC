#include <iostream>
using namespace std;



template <typename T>
T addvals(T inputa, T inputb);



int main(void){

    int a = 34;
    int b = 78;
    float c = 98.34;
    float d = 78.32;

    cout <<" Sum of two vals "<< addvals(a,b) << "\n";
    cout <<" Sum of two vals "<< addvals(c,d) << "\n";

    return 0;
}

template <typename T>
T addvals(T inputa, T inputb){
    T sum = inputa + inputb;

    return sum;
}