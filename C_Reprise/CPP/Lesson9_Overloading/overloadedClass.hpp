#include <iostream>
using namespace std;

class Compare {

    public:
           float findsmaller(float input1, float input2);
           int  findsmaller(int input1, int input2);
           char findsmaller(char input1, char input2);
};


float Compare::findsmaller(float input1, float input2){

    if(input1<input2){

        cout << "Input1 is smaller ";
        return input1;
    }else {
         cout << "Input2 is smaller ";
        return input2;

    }
}


int Compare::findsmaller(int input1, int input2){

    if(input1<input2){

        cout << "Input1 is smaller ";
        return input1;
    }else {
         cout << "Input2 is smaller ";
        return input2;

    }
}

char Compare::findsmaller(char input1, char input2){

    if(input1<input2){

        cout << "Input1 is smaller ";
        return input1;

    }else {
         cout << "Input2 is smaller ";
        return input2;

    }

}