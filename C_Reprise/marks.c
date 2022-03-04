#include <stdio.h>


int main(void){

    int grade;

    

    printf("Please enter your grade");
    scanf("%d",&grade);

    if(grade<50){
        printf("Your grade is %i , and that is a failure  \n",grade);

    }else if(grade>=50 && grade<70){
        printf("Your grade is %i and that is a pass  \n",grade);

    }else if (grade >=70 && grade <= 100) {
        printf("Your grade is %i and that is a distinction \n", grade);

    } else if (grade >100){
        printf("Your grade is %i and that is an invalid grade \n",grade);
    }



}