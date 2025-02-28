#include <stdio.h>
//nota media aluna
int main(){
    float nota1, nota2, nota3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("A media da aluna e: %.2f\n", media);

    if (media >= 7)
    {
        printf("A aluna foi aprovada\n");
    }
    else if (media >= 5)
    {
        printf("A aluna esta de recuperacao\n");
    }
    else
    {
        printf("A aluna foi reprovada\n");
    }

    if (media >= 7)
    {
        /* code */
    }
    
    return 0;

}