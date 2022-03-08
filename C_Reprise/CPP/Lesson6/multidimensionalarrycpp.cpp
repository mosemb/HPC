#include <stdio.h>
#include <iostream>

int main(void){

    int array2d[2][3] = {1,2,3,4,5,6};

    for(int i = 0; i<2; i++){
        for(int j=0; j<3; j++){

            std::cout<<"array2Dim["<<i<<"]["<<j<<"] = " << array2d[i][j]<<"\n";
        }
    }

}