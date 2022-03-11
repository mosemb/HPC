#include "constructorOverload.hpp"



int main(void){
    int width , length;
    width =10;
    length = 11;

    Square s(width,length);
    Square s2;

    cout<<"Width S:" << s.getlength() <<" Length S:"<< s.getwidth() << "\n";
    cout<<"Width S2:" << s2.getlength() <<" Length S2:"<< s2.getwidth() << "\n";

    return 0;

}