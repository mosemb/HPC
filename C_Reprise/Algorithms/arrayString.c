#include <stdio.h>
#include <string.h>


int main(void){
    // Basically thing rows and columns 

    #define No_Strs 5
    #define Max_StrSize 13

    //char target[5] = "Three"; 
    char strs [No_Strs][Max_StrSize] = {"One", "Two", "Three", "Four", "Five"};
    for(int i=0; i<No_Strs; i++){
        
       // printf("Element number %s with length %d: \n", strs[i], strlen(strs[i]));

        if(strcmp(strs[i],"Three")==0){

            printf("Element found %s \n", strs[i]);
            return 0;
        }
    }

    printf("Element not found ");
    return 1;
    




}