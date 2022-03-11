#include "GameBoardcpp.hpp"


int main(void){
    Gameboard game1;
    // Row number 1 
    game1.setGameSpace(0,0,'x');
    game1.setGameSpace(0,1,'x');
    game1.setGameSpace(0,2,'x');
    game1.setGameSpace(0,3,'x');

    // Row number 2
  /*  game1.setGameSpace(1,0,'x');
    game1.setGameSpace(1,1,'-');
    game1.setGameSpace(1,2,'x');
    game1.setGameSpace(1,3,'-'); */

    // Row number 3
  /*  game1.setGameSpace(2,0,'x');
    game1.setGameSpace(2,1,'-');
    game1.setGameSpace(2,2,'-');
    game1.setGameSpace(2,3,'x'); */

    // Row number 4
 /*   game1.setGameSpace(3,0,'x');
    game1.setGameSpace(3,1,'-');
    game1.setGameSpace(3,2,'-');
    game1.setGameSpace(3,3,'x'); */

    // Rows 
    int win = game1.fourInRow();
    game1.printInfo();

    cout<< "State :"<<win << "\n";
    
}