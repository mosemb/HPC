#include "flowerInheritance.hpp"



int main(void){

    Rose rose; 
    rose.setBloomtime("Winter");
    rose.setFragrance("Mints");

    cout << "Bloom time :"<<rose.getBloomtime() << " Fragrance "<< rose.getFragrance() <<"\n";

    return 0; 
}