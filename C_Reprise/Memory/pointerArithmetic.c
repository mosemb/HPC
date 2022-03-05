#include <stdio.h>


int main(void){

    char * str = "Hi!"; 

    // We can use pointers to get the values that are asssociated with the correspoinding strings 
    printf("%c \n",*str);
    printf("%c \n",*(str+1));
    printf("%c \n",*(str+2));
    printf("%c \n",*(str+3));

    // Memory addresses for the string 
    printf("%p \n",*str);
    printf("%p \n",*(str+1));
    printf("%p \n",*(str+2));
   // printf("%c \n",*(str+3));

    printf("%c \n",str[0]);
    printf("%c \n",str[1]);
    printf("%c \n",str[2]);
    printf("%c \n",str[3]);

    //printf("%s \n",&str);

    int vals [] = {1,2,3,4,5,6,7,8};  // Arrays can be treated as if they are pointers 
    printf("%d \n",*vals); // This is similar to slicing 
    printf("%d \n",*(vals+1)); // We can go to the next value by adding 1 to the memory block 
    printf("%d \n",*(vals+2)); // Same thing as above add continueously. 
    printf("%d \n",*(vals+3));

    printf("%s \n"," ");
    printf("%d \n",vals[0]); 
    printf("%d \n",vals[1]); 
    printf("%d \n",vals[2]); 
    printf("%d \n",vals[3]); 

    char * strs [] = {"Mose", "Mike", "Brett"};
    printf("%s \n", *strs);
    printf("%s \n", *(strs+1));

}