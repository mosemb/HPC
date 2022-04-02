#include <stdio.h>
#include <mpi.h>

using namespace std;


int main( int argc, char *argv[]){

    // Unique rank assigned to the process 
    int rank; 

    // Total number of ranks 
    int size; 

    // The machine we are working on
    char name[80];

    //Length of the machine name
    int length;

    // Initialize MPI 
    MPI_Init(&argc,&argv);

    // Get this process, Rank process with communicator 
    // MPI _Commworld is the defualt communicator 
    MPI_Comm_rank( MPI_COMM_WORLD, &rank);


    // Get the name of the processor 
    MPI_Get_processor_name( name , &length);

    cout << "Hello MPI Rank ! " << rank << " Size " << size << " On " << name << endl;

    // Terminate mpi
    MPI_Finalize();


    return 0;
}