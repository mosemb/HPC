#include <iostream>
#include <stdio.h>
using namespace std;

class Instrument{

    public:
          virtual void MakeSound();
};

void Instrument::MakeSound(){
    cout<< " Instrument playing "<<"\n";
}

class Guitar{
    public: 
          void MakeSound();
};

void Guitar::MakeSound(){
    cout << " Guitar playing "<< "\n";
}



