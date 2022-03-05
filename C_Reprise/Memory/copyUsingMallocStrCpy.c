#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(void){

    char * s = "mose";
    char * t = malloc(strlen(s)+1);  // Using malloc to assign values. 
    strcpy(t,s);

    if(t==NULL){
        return 1;
    }


    if(strlen(t)>0){
        t[0] = toupper(t[0]);
    }
    

    printf("%s \n",t);
    printf("%s \n",s);

    free(t);
}