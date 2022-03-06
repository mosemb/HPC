#include <stdlib.h>
#include <stdio.h>


int main(void){

    // Create a list of size 3 by having malloc allocate memory to it. 
    int *list = malloc(3*sizeof(int));
    if(list == NULL){
        return 1;
    }

    // Assign values to list using pointer arithmetic 
    *list = 1; 
    *(list+1) = 2; 
    *(list+2) = 3; 

    // The assignment above is the same as 
    /*
    list[0]=1 , list[1]=2, list[2] = 3; Either way its wors 
    */

   // Time passes but you want to have an array of size 4. 
   int *tmp = malloc(4*(sizeof(int)));

   if(tmp==NULL){
       free(list);
       return 1;
   }

   // Copy element of list from list to tmp
   for(int i=0; i<4; i++){
       tmp[i] = list[i];
   }
   
   // Add 4th element to tmp array
   tmp[3] = 4; 


   // Free memory of old array
   free(list);

   list = tmp;

   for(int i =0; i<4; i++){
       printf("%d \n",list[i]);
   }

   free(list);


   return 0;
}