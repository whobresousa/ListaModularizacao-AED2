/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modulariza��o (PARA ENTREGA)

6. Escreva um programa que implemente uma fun��o que passe dado n�mero inteiro 
como par�metro, e este desenhe um n�mero equivalente a �*� na tela.  
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
        printf("Digite um n�mero inteiro maior que zero: ");
        scanf("%d", &n);
    } while (n <= 0);  // repete at� que o n�mero seja maior que zero
    
    desenhaNumero(n);

    return 0;
}
