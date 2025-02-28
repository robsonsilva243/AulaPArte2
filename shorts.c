#include <stdio.h>

int main (){
    short int numeroPequeno = 32767; // valor maximo de um short int
    printf("Numero pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // valor maximo de um short int
    printf("Numero pequeno (short int): %d\n", numeroPequeno);

    printf("/n*** tamanhi das variaveis ***\n");
    printf("Short int: %lu B - int: %lu B\n", sizeof(short int), sizeof(int));
    printf("float: %lu B - double: %lu B\n", sizeof(float), sizeof(double));

    return 0;
}