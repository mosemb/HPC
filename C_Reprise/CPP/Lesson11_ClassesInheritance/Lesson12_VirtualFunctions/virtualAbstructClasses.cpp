#include "virtualAbstructClasses.hpp"


int main(void){

    Instrument * guitar = new Guitar();
    Instrument * flute = new Flute();

    guitar->Makesound();
    flute->Makesound();

    return 0;
}


    