#include <stdio.h>

int main (){
    float temperatura, umidade;
    unsigned int estoque, estouqueMinimo = 1000;

    printf ("Digite a temperatura: \n");
    scanf("%f", &temperatura);
    printf ("Digite a umidade: \n");
    scanf("%f", &umidade);
    printf ("Digite o estoque: \n");
    scanf("%u", &estoque);

    if ( temperatura > 30){
        printf("temperatura esta alta\n");
        } else {
            printf("temperatura esta boa\n");
        }

    if (umidade > 50){
        printf("umidade esta alta\n");
        } else {
            printf("umidade esta boa\n");
        }

    if (estoque < estouqueMinimo){
        printf("estoque esta baixo\n");
        } else {
            printf("estoque esta bom\n");
    }
}