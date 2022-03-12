#include <stdio.h>
#include <iostream>
using namespace std; 


class Flower{
    // Flower has only one member, a string called bloomtime.
    private: 
           string bloomtime; 
    public: 
           Flower();
           void setBloomtime(string bloomttime);
           string getBloomtime();
};

Flower::Flower(){
    
    bloomtime = "unknown";
}

void Flower::setBloomtime(string bloomttime){
    bloomtime = bloomttime;
}

string Flower::getBloomtime(){
    return bloomtime;
}

class Rose : public Flower {

    //Rose has only one member, a string called fragrance.
    private:
           string fragrance;

    public:
          Rose();
          void setFragrance(string fragrancec);
          string getFragrance(); 
};

Rose::Rose(){
    fragrance = "unknown";
}

void Rose::setFragrance(string fragrancec){
    fragrance = fragrancec;
}

string Rose::getFragrance(){
    return fragrance;
}








