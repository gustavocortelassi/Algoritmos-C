#include <stdio.h>

int main(){

    int base, altura, area;

    printf("Entre com a base do triangulo: ");
    scanf("%i", &base);

    printf("Entre com a altura do triangulo: ");
    scanf("%i", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo eh de: %i", area);
}