#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;
int main(void){

    int a; 
    int b;
    int result = 0;
    char operation;

    cout << "Please enter the first number \n";
    cin>> a;
    cout << "Please enter the second number \n";
    cin>> b;
    cout << "Please enter an operation either A for +, S for -, D for / or M for x \n";
    cin >> operation;

    


    switch (operation)
    {
    case  '+'/* constant-expression */:
        /* code */
        result = a+b;
        cout << "Result is "<< result << "\n"; 
        break;
    case '-':
          result = a-b;
          cout << "Result is "<< result << "\n"; 
          break;
    case '/':
          result = a/b;
          cout << "Result is "<< result  << "\n"; 
          break;
    case '*':
          result = a*b; 
          cout << "Result is "<< result << "\n"; 
          break;            
    
    default:
        cout << "Invalid selection  ";
        break;

    }


    return 0;
}