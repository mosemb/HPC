#include <stdio.h>


int main(void){

    char chars; 

    printf("Please enter a character \n");
    scanf("%c",&chars);


    if(chars == 'y'|| chars=='Y'){
        printf("I agree \n");

    }else if (chars == 'n' || chars== 'N'){
        printf("I do not agree \n"); 

    }


    return 0; 
}