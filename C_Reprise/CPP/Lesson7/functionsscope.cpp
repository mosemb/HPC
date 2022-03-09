#include <stdio.h>
#include <iostream>


void alterparameters(int a);
int  alterparameterswithreturn(int a);
void alterparameterswithaddress(int &a);

int main(void){

    int a = 34;
    printf(" %d \n",a);
    alterparameters(34);  // At call
    printf(" %d \n",a); // After change nohting changes because its a different scope 
    printf(" \n"); 
    int s = alterparameterswithreturn(a); // With a return value then the value of a is changed 
    printf(" %d \n",s);
    alterparameterswithaddress(a);
    printf(" %d \n",a);

  
}

void alterparameters(int a){
    a=a+1;
    printf(" %d \n", a);
}

int alterparameterswithreturn(int a){
    a=a+1;
    //printf(" %d \n", a);
    return a;
}

void alterparameterswithaddress(int &a){
    a=a+1;
}
