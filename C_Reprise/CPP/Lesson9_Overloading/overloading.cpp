#include <iostream>
using namespace std;

// WIth method overloading the methods should have the same names but different inputs 

float findsmaller(float input1, float input2);
int  findsmaller(int input1, int input2);
char findsmaller(char input1, char input2);

int main(void){

    int a = 5; 
    int b = 4;
    float f1 = 5.43;
    float f2 = 6.32;
    char c1 = 'c';
    char c2 = 'z';
    std::cout<<findsmaller(a,b) << "\n";
    std::cout<<findsmaller(f1,f2) << "\n";
    std::cout<<findsmaller(c1,c2) << "\n";

return 0; 
}

float findsmaller(float input1, float input2){

    if(input1<input2){

        cout << "Input1 is smaller ";
        return input1;
    }else {
         cout << "Input2 is smaller ";
        return input2;

    }
}


int findsmaller(int input1, int input2){

    if(input1<input2){

        cout << "Input1 is smaller ";
        return input1;
    }else {
         cout << "Input2 is smaller ";
        return input2;

    }
}



char findsmaller(char input1, char input2){

    if(input1<input2){

        cout << "Input1 is smaller ";
        return input1;
    }else {
         cout << "Input2 is smaller ";
        return input2;

    }
}
