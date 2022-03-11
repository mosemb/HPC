#include <iostream>
using namespace std;

class Square{

    private:
           int length; 
           int width; 

    public: 
           Square();
           Square(int length, int width);
           void setlength(int length);
           int getlength();
           void setwidth(int width);
           int getwidth();   
};

Square::Square(){
    length = 0; 
    width = 0;
}

Square::Square(int length, int width){
    this->length= length;
    this->width = width;
}

void Square::setlength(int length){
    this->length = length;
}

int Square::getlength(){
    return length;

}

void Square::setwidth(int width){

    this->width = width;
}

int Square::getwidth(){
    return width;
}