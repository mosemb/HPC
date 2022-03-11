#include <stdio.h>
#include <iostream>

using namespace std;


// The template function 
template <typename T>
T findthesmallest(T input1, T input2);

int main(void){

    int a = 54; 
    int b = 89;
    float f1 = 7.8;
    float f2 = 9.1;
    char c1 = 'f';
    char c2 = 'h';
    string s1 = "Hello";
    string s2 = "Bots are fun";
    
    //Wow! We can use one function for different variable types
    cout<<"\nIntegers compared: "<<findthesmallest(a,b)<<"\n";
    cout<<"\nFloats compared: "<<findthesmallest(f1,f2)<<"\n";
    cout<<"\nChars compared: "<<findthesmallest(c1,c2)<<"\n";
    cout<<"\nStrings compared: "<<findthesmallest(s1,s2)<<"\n";   
    return 0;



}

template <typename T>
T findthesmallest(T input1, T input2){

    if(input1<input2){

        cout<<"Input1 is the smallest"<< "\n";
        return input1;

    }else{

        cout<<"Input2 is the smallest"<< "\n";
        return input2;
    }

}