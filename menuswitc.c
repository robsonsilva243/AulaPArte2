#include <stdio.h>

int main()
{
    int opcao;
    float Saldo = 1000;

    printf("Digite uma opcao: \n");
    printf("1 - Verificar saldo\n");
    printf("2 - Fazer Deposito\n");
    printf("3 - Fazer Saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Seu Saldo é de: %f \n", Saldo);
        break;

    case 2:
        printf("Digite o Banco: \n");
        printf("Digite a conta: \n");
        printf("Digite o agencia: \n");
        break;

    case 3:
        printf("Digite o valor do saque: \n");
        break;

    default:
    printf("Opcao Invalida\n");
        break;
    }
}