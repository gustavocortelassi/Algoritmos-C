#include <stdio.h>

int main()
{

    double distanciaTotal, combustivel, consumoMedio;

    printf("Digite a quantidade total percorrida em km: ");
    scanf("%lf", &distanciaTotal);

    printf("Digite a quantidade de combustivel gasto em litros: ");
    scanf("%lf", &combustivel);

    consumoMedio = distanciaTotal / combustivel;

    printf("\nO consumo medio eh de: %.2lf km/l\n", consumoMedio);

    return 0;
}