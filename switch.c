#include <stdio.h>

int main()
{
    int vaarivael;

    printf("Digite um valor: \n");
    scanf("%d", &vaarivael);

    switch (vaarivael)
    {
    case 1: // no caso se digitar 1 (recomendavel com menu)
        printf("variavel eh 1\n");
        break;

    case 2: // no caso se digitar 1 (recomendavel com menu)
        printf("variavel eh 2\n");
    break;

    default:
    printf("variavel eh diferente de 1 ou 2\n");
        break;
    }
}