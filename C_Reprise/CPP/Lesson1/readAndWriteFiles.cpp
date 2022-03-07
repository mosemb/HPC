#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(void){

    string line;


    // Write to a file 
    ofstream File1("input.txt", ios::app);
    if(File1.is_open()){
        File1 << "\n Am adding a line to a file \n";
        File1 << "Am adding another line \n";
        File1 << "And this is the last line \n";
        File1.close();
    }else {
        cout<< "Unable to open file for writting.";
    }

    // Read a file
    ifstream File2("input.txt");
    if(File2.is_open()){

        while(getline(File2,line)){

            cout << line  << "\n";
            File2.close();

        }
    }else {
        cout << "Unable to open file for reading";
    }


    return 0;

}