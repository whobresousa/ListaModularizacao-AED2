/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modularização (PARA ENTREGA)

2.Escreva uma função que retorne a divisão entre dois números inteiros. 
Atenção para a questão da divisão por zero! A divisão não pode ocorrer se o 
divisor for zero.  
*******************************************************************************/

#include <stdio.h>

int divisao(int a, int b, int *result) {
    if (b == 0) {
        return 0; 
    } else {
        *result = a / b;
        return 1; 
    }
}

int main() {
    int a, b, result;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (divisao(a, b, &result)) {
        printf("A divisao entre %d e %d: %d.\n", a, b, result);
    } else {
        printf("Não foi possivel realizar a divisao por 0\n");
    }

    return 0;
}

