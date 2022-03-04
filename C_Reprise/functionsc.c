#include <stdio.h>

void printline(int i);

int main(void ){


    int n;
    printf("Please enter the number of lines ");

    scanf("%d",&n);
    printline(n);

}




void printline(int n){

    for(int i =0; i<=n; i++){

        printf("This is line %i \n",i);
    }

    
}