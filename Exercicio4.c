#include <stdio.h>

int main()
{
    double area, raio;
    double pi = 3.14;

    printf("Digite o valor do raio para ser calculada sua area: ");
    scanf("%lf", &raio);

    area = pi * (raio * raio);

    printf("\nO raio do circulo eh de aproximadamente: %2.lf ", area);

    return 0;
}