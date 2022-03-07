#include "userinput.hpp"

int main(void){

    int age = 0; 
    int year = 0; 
    string name = "";
    string phrase = "";

    cout<<"What is your name ? " << "\n";
    cin >> name;
    cout<< "Hi "<< name << "\n";
    cout << "What is your age ? \n";
    cin >> age ;
    cout << "I am "<< age << "\n";
    cout << "What is your favorite year ? ";
    cin>> year;
    cout << "How great that " << year << " is your favorite year "<< "\n";
    cout << "What is your favorite phrase?  \n";
    getline(cin,phrase);
    cout << "Cool your favorite phrase is "<< phrase << "\n";


    return 0;
}