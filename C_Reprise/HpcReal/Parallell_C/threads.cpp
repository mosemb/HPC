#include <thread>
#include <iostream>
#include <stdio.h>

//using namespace std;


void call_from(int tid ){
    printf("Thread number %i \n",tid); 
}



int main(){


    std::thread t[10];
    for(int i=0; i<10; i++){
        t[i]=std::thread(call_from,i); 
    }

    printf("This is the main thread ... ");

    // Wait for all the threads to complete 
    for(int i = 0; i<10; i++){
        t[i].join();
    }


    return 0; 


}




