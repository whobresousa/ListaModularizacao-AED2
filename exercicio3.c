/******************************************************************************
Brenda Oliveira de Sousa - 8133177
Lista Modularização (PARA ENTREGA)

3. Escreva um programa que calcule a área de um círculo a partir de uma função 
especialmente desenhada para isso; essa função recebe o valor do raio e retorna 
a área do círculo.  
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






