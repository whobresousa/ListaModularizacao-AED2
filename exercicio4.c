/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modulariza��o (PARA ENTREGA)

4. Crie um sistema de caixa eletr�nico, utilizando menus (switch) e outros 
recursos, que realizem opera��es financeiras a partir de fu��es especificamente 
projetadas para tal. Lembre-se de que o caixa eletr�nico � um programa que roda 
como repeti��o cont�nua, at� que o usu�rio decida encerrar as opera��es. 
Opera��es: Dep�sito, Saque e Saldo. 
*******************************************************************************/
#include <stdio.h>

// fun��o para realizar um dep�sito
void deposito(float *saldo) {
    float valor;
    printf("Digite o valor a ser depositado: R$");
    scanf("%f", &valor);
    *saldo += valor;
    printf("Deposito de R$%.2f efetuado com sucesso.\n", valor);
}

// fun��o para realizar um saque
void saque(float *saldo) {
    float valor;
    printf("Digite o valor a ser sacado: R$");
    scanf("%f", &valor);
    if (valor > *saldo) {
        printf("Saldo insuficiente.\n");
    } else {
        *saldo -= valor;
        printf("Saque de R$%.2f efetuado com sucesso.\n", valor);
    }
}

// fun��o para exibir o saldo atual
void saldoAtual(float saldo) {
    printf("Saldo atual: R$%.2f\n", saldo);
}

int main() {
    float saldo = 0;
    int escolha;

    do {
        printf("==Caixa Eletronico ==\n");
        printf("1. Deposito\n");
        printf("2. Saque\n");
        printf("3. Saldo\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: // Dep�sito
                deposito(&saldo);
                break;
            case 2: // Saque
                saque(&saldo);
                break;
            case 3: // Saldo
                saldoAtual(saldo);
                break;
            case 4: // Sair
                printf("Obrigado por usar o caixa eletronico!\n");
                break;
            default: // op��o inv�lida
                printf("Opcao invalida.\n");
                break;
        }

    } while (escolha != 4);

    return 0;
}

