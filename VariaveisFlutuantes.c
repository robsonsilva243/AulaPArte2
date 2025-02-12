#include <stdio.h>

/**
 * @brief Imprime o quociente da divis o entre dois numeros inteiros como um numero real.
 *
 * @details
 * Este programa demonstra como efetuar a convers o de um numero inteiro para um numero real.
 * A fun o main() define dois numeros inteiros, efetua a divis o entre eles e imprime o resultado como um numero real.
 */

int main (){
    int a = 10;
    int b= 3;
    float quociente = (float) a / b;
    printf("Quociente: %.2f\n", quociente);
    return 0;


}
