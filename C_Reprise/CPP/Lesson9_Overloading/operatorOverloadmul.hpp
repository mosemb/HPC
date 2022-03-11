#include <iostream>
using namespace std;

class Shape{

    private:
           int length; 
           int width; 

    public: 
          Shape (int len, int wid){
              length = len;
              width = wid;
          }  

          int Area(){

              int area = length*width;
              return area;
          }  

          int getWidth(){
              return width;
          }

          int getLength(){
              return length;
          }

          int operator + (Shape inshape){

              return //((width + inshape.getWidth()) * (length + inshape.getWidth()));
                     ((width + inshape.getWidth()) * (length + inshape.getLength()));
          }  

};