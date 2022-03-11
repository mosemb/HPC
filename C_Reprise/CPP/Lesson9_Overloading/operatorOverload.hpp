#include <iostream>

using namespace std; 

class Shape{

    private:
           int width; 
           int length; 

    public:
          Shape(int l=2, int w=2){

            width = w;
            length = l;
          }

          double Area(){
              int area = width*length;
              return area;
          }

          int operator + (Shape InShape){
              return Area()+ InShape.Area();
          }    



};


