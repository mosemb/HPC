#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void){

    char * s = "mose";
    char * t = malloc(strlen(s)+1);

    for(int i = 0 , n = strlen(s); i<n; i++){

        t[i] = s[i]; // copys the contents of s to t. 
    }

    t[0] = toupper(t[0]);

    printf("%s \n",s);
    printf("%s \n",t);


    free(t);  // Free malloc. 



    
    //strcpy(t,s);


    


}