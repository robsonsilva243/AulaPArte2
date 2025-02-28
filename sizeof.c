#include <stdio.h>

int main (){
    printf(" Tamnho do int: %ld bytes\n", sizeof(int));
    printf("tamanho de long int: %ld bytes\n", sizeof(long int));
    printf("tamanho de long long int: %ld bytes\n", sizeof(long long int));
    printf("Tamho do double: %ld bytes\n", sizeof(double));
    printf("tamnho do long double: %ld bytes\n", sizeof(long double));
}

// Output:x
// Tamnho do int: 4 bytes
// tamanho de long int: 8 bytes
// tamanho de long long int: 8 bytes
// Tamho do double: 8 bytes
// tamnho do long double: 16 bytes