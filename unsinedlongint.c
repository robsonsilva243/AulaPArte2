#include <stdio.h>

int main (){
    unsigned long int numeroGrandePositivo = 4000000000; //Este valor excede o limite de um int normal
    unsigned int numeroPositivo = 4000000000; //Este valor excede o limite de um int normal
    long long int numeroGrande = 4000000000; //Este valor excede o limite de um int normal
    int numero = 4000000000; //Este valor excede o limite de um int normal

    printf("Numero positivo grande: %lu\n", numeroGrandePositivo);
    printf("Numero positivo grande: %u\n", numeroPositivo);
    printf("numero grande: %lld\n", numeroGrande);
    printf("Numero: %d\n", numero);

    return 0;
}