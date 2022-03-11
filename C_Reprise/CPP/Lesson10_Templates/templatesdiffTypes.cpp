#include <iostream>
using namespace std; 


// Different types 
template <typename T, typename U>
T returnBigger(T inputa, U inputb);

int main(void){

    int a = 5;
    float b = 6.334;

    cout <<" Sum of two vals "<< returnBigger(a,b) << "\n";
    //cout <<" Sum of two vals "<< returnBigger(c,d) << "\n";
}

template<typename T, typename U>
T returnBigger(T inputa, U inputb){
    if(inputa>inputb){
        cout<< "Input A is greater "<<"\n";
        return inputa;
    }else {
        cout<< "Input B is greater "<<"\n";
        return inputb;
    }
}