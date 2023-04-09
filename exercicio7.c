

/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modularização (PARA ENTREGA)

6.  Escreva uma função que retorne o cubo do valor passado como argumento. 
*******************************************************************************/
#include <stdio.h>

int cubo(int num) {
    int cubo = num * num * num;
    return cubo;
}

int main() {
    int num, result;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    result = cubo(num);

    printf("O cubo de %d e %d", num, result);

    return 0;
}

