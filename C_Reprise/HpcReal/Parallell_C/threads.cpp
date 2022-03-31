#include <thread>
#include <iostream>
#include <stdio.h>
#include <mutex> // Has lock to make sure threads move in order 

using namespace std;
mutex mtx;


void call_from(int tid ){

    // There is a little problem with our printing of the ids. They are not in order. 
    // We need to fix this. 

    mtx.lock(); // Locks the thread
    printf("Thread number %i \n",tid); 
    mtx.unlock(); // Unlocks the thread. 
}



int main(){


    thread t[10];
    for(int i=0; i<10; i++){
        t[i]=thread(call_from,i); 
    }

    printf("This is the main thread ... \n");

    // Wait for all the threads to complete 
    for(int i = 0; i<10; i++){
        t[i].join();
    }


    return 0; 


}




