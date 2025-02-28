#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int opcao;
    int numeroSecreto, palpite;

    printf ("Menu Pricipal\n");
    printf ("1. Iniciar Jogo\n");
    printf ("2. Ver Regras\n");
    printf ("3. Sair\n");
    printf ("Digite uma opcao: \n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;
            printf("Digite um numero entre 0 e 9: \n"); scanf("%d", &palpite);
            if (palpite == numeroSecreto){
                printf("Parabens, voce acertou!\n");
                printf("O numero secreto era %d\n", numeroSecreto);
            } else {
                printf("Que pena, voce errou!\n");
                printf("O numero secreto era %d\n", numeroSecreto);
            }
            break;
        case 2:
            printf("Regras do jogo\n");
            break;
        case 3:
            printf("Sair\n");
            break;
        default:
            printf("Opcao Invalida\n");
            break;
    }
}