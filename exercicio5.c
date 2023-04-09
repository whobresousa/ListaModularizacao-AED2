/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modularização (PARA ENTREGA)

5. Crie uma função que determine se dado caracter está entre ‘a’ e ‘z’. 
Dica: Use a tabela ASCII.
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int verifica(char c) {
    if (islower(c)) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    if (verifica(c)) {
        printf("O caractere '%c' esta entre 'a' e 'z'\n", c);
    } else {
        printf("O caractere '%c' nao esta entre 'a' e 'z'\n", c);
    }

    return 0;
}

