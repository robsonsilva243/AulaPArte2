#include <stdio.h>  // Inclui a biblioteca stdio.h

int main (){

    int numeroNormal = 214783647; //valor maximo de int
    long long int numeroGrande = 2147483647; //valor maximo de long int

    printf("Numero regular (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande);

    numeroGrande = 214748364787; //valor maximo de int
    printf("Numero grande atualizado(long int): %lld\n", numeroGrande);

    return 0;
}