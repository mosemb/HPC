#include <iostream> 
#include <stdio.h>

using namespace std;


class Gameboard {

     char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix


};

Gameboard::Gameboard(){

    for(int i = 0; i<4; i++){
        for(int j =0; j<4; j++){
            gameSpace[i][i] = '-';
        }
    }
}

void Gameboard::setGameSpace(int row, int column, char value){

    gameSpace[row][column] = value;

}

char Gameboard::getGameSpace(int row, int column){

    char space = ' ';
    for(int i = 0; i<4; i++){
        for(int j =0; i<4; j++){
            if(gameSpace[i][j]==gameSpace[row][column]){
                space = gameSpace[i][j];
            }
        }
    }

    return space;
}

int Gameboard::fourInRow(){
    int win = 0;
    int sumxs;

    for(int i = 0; i<4; i++){

        sumxs=0;
        for(int j =0; j<4; j++){
            if(gameSpace[i][j]=='x')
            {
                sumxs = sumxs+1; }
            }
           // cout<< " Row number :"<<i<< "Has result "<<win << " \n";
        }

        
    
    return win;
}

void Gameboard::printInfo(){

    for(int i =0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"Element at row " << i << " and Column :"<< j << " is "<< gameSpace[i][j] << "\n";
        }
        cout<<"\n";
    }

}


