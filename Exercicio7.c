#include <stdio.h>

int main()
{

    double real, dolar, cotacao;

    printf("\nEntre com o valor em reais para ser convertido: ");
    scanf("%lf", &real);

    printf("\nEntre com a cotacao atual do dolar: ");
    scanf("%lf", &cotacao);

    dolar = real / cotacao;

    printf("O resultado da conversao eh: %2.lf dolares", dolar);

    return 0;
}