#include <stdio.h>


//Treinando Incremento e Decremento
int main(){

//operadoreas arimeticos
int a = 5;
int b = 10;

int soma = a + b;
int subtracao = a - b;
int multiplicacao = a * b;
int divisao = a / b;

// Operadores de atribuicao
a += 1;
b /=3;
a -=2;

//Operadores de incremento e decremento
a++;
b--;

//Exibindo os resultados

printf("Soma: %d\n", soma);
printf("Subtracao: %d\n", subtracao);
printf("Multiplicacao: %d\n", multiplicacao);
printf("Divisao: %d\n", divisao);
printf("Atribuicao: %d\n", a);
printf("Atribuicao: %d\n", b);
printf("Incremento: %d\n", a);
printf("Decremento: %d\n", b);








return 0;


}
