#include <stdio.h>

int main()
{

    double temperatura_celsius, temperatura_fahrenheit;

    printf("Entre com a temperatura em Celsius: ");
    scanf("%lf", &temperatura_celsius);

    temperatura_fahrenheit = (9 * temperatura_celsius + 160) / 5;

    printf("\nA temperatura em Fahrenheit convertida eh de: %2.lf", temperatura_fahrenheit);

    return 0;
}