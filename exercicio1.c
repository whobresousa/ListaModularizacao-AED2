/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modulariza��o (PARA ENTREGA)

1. Escreva um programa que implemente uma fun��o que retorne a diferen�a entre 
dois numeros inteiros digitados peli usuario.
*******************************************************************************/
#include <stdio.h>

int diferenca(int a, int b) {
    return a - b;
}

int main() {
    int a, b;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    int result = diferenca(a, b);
    
    printf("A diferen�a entre %d e %d: %d.\n", a, b, result);
    return 0;
}


