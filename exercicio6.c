/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modularização (PARA ENTREGA)

6. Escreva um programa que implemente uma função que passe dado número inteiro 
como parâmetro, e este desenhe um número equivalente a “*” na tela.  
*******************************************************************************/

#include <stdio.h>

void desenhaNumero(int n) {
    int i;
    
    for (i = 0; i < n; i++) {  // desenha n asteriscos em cada linha
        printf("*");
    }
}

int main() {
    int n;

    do {
        printf("Digite um número inteiro maior que zero: ");
        scanf("%d", &n);
    } while (n <= 0);  // repete até que o número seja maior que zero
    
    desenhaNumero(n);

    return 0;
}
