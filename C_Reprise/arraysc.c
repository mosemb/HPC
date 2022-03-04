#include <stdio.h>


int main(void){

    int n;
    printf("Please state the number of values ");
    scanf("%d",&n);

    int scores[n];
    int val;

    for(int i =0; i<n; i++){
        printf("Please enter the value ");
        scanf("%d",&scores[i]);
    }



    float sum = 0;
    for(int j=0; j<n; j++){
        sum = sum+scores[j];
    }

    float average = sum/n;
    printf("The sum for these values is %f \n",sum);
    printf("The average for these values is  %f \n",average);

    


}