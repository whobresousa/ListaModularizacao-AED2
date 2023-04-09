/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modulariza��o (PARA ENTREGA)

2.Escreva uma fun��o que retorne a divis�o entre dois n�meros inteiros. 
Aten��o para a quest�o da divis�o por zero! A divis�o n�o pode ocorrer se o 
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
        printf("N�o foi possivel realizar a divisao por 0\n");
    }

    return 0;
}

