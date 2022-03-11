#include <stdio.h>
#include <iostream>

using namespace std;


int main(void){

    int givenInt = 9;
    float givenFloat = 9.0;
    double givenDouble = 8.3;
    string givenString = "Dre";
    char givenChar ='C';
    int *pointergiveInt = &givenInt; // This gives us the address for givenInt
    int **pointergiveIntpointer = &pointergiveInt; // This gives us the pointer address

    //int *pointergivenInt = &givenInt;

    printf("The value for the int is %i and its stored at %p \n",givenInt,&givenInt);
    printf("The value for the int is %i and its stored at %p \n",*pointergiveInt,&givenInt);
    printf("The value for the int is %i and its stored at %p \n",**pointergiveIntpointer ,&pointergiveInt);
    printf("\nThe value for the float is %f and its stored at %p \n",givenFloat,&givenFloat);
    printf("The value for the double is %lf and its stored at %p \n",givenDouble,&givenDouble);
    printf("The value for the String is %s and its stored at %p \n",givenString,&givenString);
    printf("The value for the String is %c and its stored at %p \n",givenChar ,&givenChar);
    
    
} 

