#include <stdio.h>

int main(){
    /*Soma (+), Subtracao (-), Multiplicacao (*), Divisao (/)*/

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;


printf("Digite o primeiro numero: ");
scanf("%d ", &numero1);
printf("Digite o segundo numero: ");
scanf("%d ", &numero2);

soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero2;

printf("A SOMA e: %d\n", soma);
printf("A subtracao e: %d\n", subtracao);
printf("A multiplicacao e: %d\n", multiplicacao);
printf("A divisao e: %d\n", divisao);

//operacap soma
    soma = numero1 + numero2;
    //operacao subtracao
    subtracao = numero1 - numero2;
    //opracap multiplicacao
    multiplicacao = numero1 * numero2;
    //operacao divisao
    divisao = numero1 / numero2;
}