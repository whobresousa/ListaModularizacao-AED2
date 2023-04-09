/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modularização (PARA ENTREGA)

4. Crie um sistema de caixa eletrônico, utilizando menus (switch) e outros 
recursos, que realizem operações financeiras a partir de fuções especificamente 
projetadas para tal. Lembre-se de que o caixa eletrônico é um programa que roda 
como repetição contínua, até que o usuário decida encerrar as operações. 
Operações: Depósito, Saque e Saldo. 
*******************************************************************************/
#include <stdio.h>

// função para realizar um depósito
void deposito(float *saldo) {
    float valor;
    printf("Digite o valor a ser depositado: R$");
    scanf("%f", &valor);
    *saldo += valor;
    printf("Deposito de R$%.2f efetuado com sucesso.\n", valor);
}

// função para realizar um saque
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

// função para exibir o saldo atual
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
            case 1: // Depósito
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
            default: // opção inválida
                printf("Opcao invalida.\n");
                break;
        }

    } while (escolha != 4);

    return 0;
}

