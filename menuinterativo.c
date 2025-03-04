#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int opcao;
    int numeroSecreto, palpite, regras;

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
            printf("1. Como jogar?\n");
            printf("2. Quantas Tentativas?\n");
            printf("3. Como Ganhar?\n");
            scanf("%d", &regras);
            switch (regras){
                case 1:
                    printf("O jogador deve adivinhar um numero entre 0 e 9\n");
                    break;
                case 2:
                    printf("O jogador tem 3 tentativas para acertar o numero\n");
                    break;
                case 3:
                    printf("O jogador ganha se acertar o numero\n");
                    break;
                default:
                    printf("Opcao Invalida\n");
                    break;
            }
            break;
        case 3:
            printf("Obrigado por Participar!\n");
            break;
        default:
            printf("Opcao Invalida\n");
            break;
    }
}