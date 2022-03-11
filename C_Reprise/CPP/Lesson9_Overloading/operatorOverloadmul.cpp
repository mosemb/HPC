#include "operatorOverloadmul.hpp"


int main(void){

    Shape shape(4,3);
    Shape shape2(3,2);



    int totalshapes = shape2+shape;

    cout << "Shape 1 :"<< shape.Area() << "\n";
    cout << "Shape 2 :"<< shape2.Area() << "\n";
    cout << "Total  :"<< totalshapes << "\n";
    
}