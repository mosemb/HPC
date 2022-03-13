#include <stdio.h>
#include <iostream>
using namespace std;




class Instrument{
/*This is an abstract class because it has atleast one virtual function that is not implimented. 
    */
    public:
           virtual void Makesound()=0;
};

class Guitar:public Instrument {

    public:
           void Makesound();
};

void Guitar::Makesound(){
    cout<< "Guitar Making sound "<<"\n";
}

class Flute:public Instrument{
    public:
          void Makesound(){
              cout<< "Flute Making sound "<<"\n";
          }
};






