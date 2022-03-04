#include <stdio.h>



int main(void){

    int num; 

    printf("Please enter a number ");

    scanf("%d",&num);

    if(num%2==0){

        printf("The entered number %d is even \n", num);
    }else {
        printf("The entered number %d is odd \n",num);
    }
    



    return 0;


}