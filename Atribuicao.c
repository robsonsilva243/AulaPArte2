#include <stdio.h>

int main(){
    /*Atribuicao simples (-)
    Atribuicao soma (+=)
    atribuicao subtracao (-=)
    atribuicao divisao (/=)
    atribuicao multiplicacao (*=)
    */

    int numero1 = 1, numero2 = 2 , resultado;

    resultado = 20;
    printf("resultado: %d\n", resultado);

    resultado += 10;
    printf("resultado: %d\n", resultado);

    resultado -= 5;
    printf("resultado: %d\n", resultado);

    numero1 += 1;
    printf("numero1: %d\n", numero1);
    numero2 ++;
    printf("numero2: %d\n", numero2);

    //resultado++;
//pos incremento
// resultado = numero1;
//numero++

//pre incremento
// numero1 = resultado;
//resultado++


// pre decremento
// numero1 = resultado; 
// resultado --;

//pos decremento
//resultado = numero1;
//numero1--;

//numeo -=1;
//numero +=1;


    return 0;

}