// El programa imprime si el proceso
// es par o impar dependiendo de su identificador.

#include "mpi.h"
#include <iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
    int rank, size;
 
    MPI_Init(&argc, &argv); 
    MPI_Comm_size(MPI_COMM_WORLD, &size); 
    MPI_Comm_rank(MPI_COMM_WORLD, &rank); 
     
    if (rank % 2 == 0)
        cout<<" Soy el Proceso "<<rank<<" y soy par."<<endl;
    else    
        cout<<" Soy el Proceso "<<rank<<" y soy impar."<<endl;
  
    MPI_Finalize();
    
    return 0;
}