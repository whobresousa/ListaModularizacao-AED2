/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modulariza��o (PARA ENTREGA)

3. Escreva um programa que calcule a �rea de um c�rculo a partir de uma fun��o 
especialmente desenhada para isso; essa fun��o recebe o valor do raio e retorna 
a �rea do c�rculo.  
*******************************************************************************/

float calcularaAreaCirculo(float raio, float pi) {
    float area = pi * (raio * raio);
    return area;
}

int main() {
    float raio, area;
    float pi = 3.14;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);
    

    area = calcularaAreaCirculo(raio, pi);

    printf("A area do circulo de raio %.2f eh: %.2f\n", raio, area);

    return 0;
}






