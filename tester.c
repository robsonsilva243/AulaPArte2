#include <stdio.h>

int main()
{
    int variavel;

    printf("Digite 1 ou 2: ");
    scanf("%d", &variavel);

    switch (variavel)
    {
    case 1:
        printf("variavel eh 1\n");
        break;
    case 2:
        printf("variavel eh 2\n");
        break;
    default:
        printf("variavel nao eh 1 ou 2\n");
        break;
    }
    

}