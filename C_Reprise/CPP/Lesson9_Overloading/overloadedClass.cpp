#include "overloadedClass.hpp"



int main(void){

    Compare c;

    int a = 5; 
    int b = 4;
    float f1 = 5.43;
    float f2 = 6.32;
    char c1 = 'c';
    char c2 = 'z';

    cout<<c.findsmaller(a,b) << "\n";
    cout<<c.findsmaller(f1,f2) << "\n";
    cout<<c.findsmaller(c1,c2) << "\n";

    return 0;
}