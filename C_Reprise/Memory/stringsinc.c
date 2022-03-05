#include <stdio.h>

typedef char * string;


int main(void){

    char *str = "Hi";
    char *p = &str[0];

    string name = "Mose";

    printf("%s \n",str);
    printf("%s \n", p);

    // Pointers 
    printf("%p \n",str);
    printf("%p \n", p);

    // Defrence operator * same as pointer 
    printf("%c \n", *str);
    printf("%c \n", *p);

    printf("%s \n",name);
    printf("%c \n",name[0]);




}