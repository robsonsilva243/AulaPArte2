#include <stdio.h>

//calculadora de media com tres notas inseridas pelo usuario
int main(){
    int nota1, nota2, nota3;
    float media;

    (printf("*** Programa de Calculo de Media ***\n\n"));

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;

    printf("Media: %.1f\n", media);

    return 0;
}