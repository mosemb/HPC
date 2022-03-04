#include <stdio.h>

//void linearsearch( int nums[]);


int main(void){


    int numss []= {0,1,2,3,4,5,6,7,8,9,10};


    int n;
    n = sizeof(numss) / sizeof(numss[0]);

     //printf("%d \n", n);

    int num;
    printf("Enter number to be searched  :");
    scanf("%d",&num);
    

    for(int i =0; i<n; i++){

        //printf("%d \n", numss[i]);

       if(numss[i]==num){
            printf("Number has been found %d \n",num);
            return 0;
        }

    }

    printf("Number has not been found %d \n",num);
    return 1;


    printf("%d \n", n);
    //linearsearch(numss);


}

/*
void linearsearch( int nums[]){

    int num; 
    printf("Enter a number between 0 and 10");
    scanf("%d",&num);
    //size_t n = sizeof(nums);

    int n; 
    n = sizeof(nums) / sizeof(int);

    printf("%d \n", n);

    for(int i = 0; i< n-1; i++){
       printf("%d \n", nums[i]);
    }

    
}

*/