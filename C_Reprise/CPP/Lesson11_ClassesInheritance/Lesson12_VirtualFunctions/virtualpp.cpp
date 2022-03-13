#include "virtualh.hpp"
/*

 Basically virtual functions are more about about overriding the given functions in the base class. 
 
*/


int main(void){

    Instrument * instrument = new Instrument();
    Instrument * guitar  = new Guitar();

    instrument->MakeSound();
    guitar->MakeSound();
    
   return 0;
};