#include <stdio.h>
#include <string.h>


int main(void){

    char name[5];
    printf("Insert name \n");
    scanf("%s", name); 

    for(int i = 0; i<strlen(name);i++){
        printf("%c ",name[i]);
    }

}