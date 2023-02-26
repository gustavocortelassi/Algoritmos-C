#include <stdio.h>

int main()
{
    float valor_financiado, taxa_juros, periodo, valor_total, valor_juros;

    printf("Entre com o valor total a ser financiado: ");
    scanf("%f", &valor_financiado);

    printf("Entre com a taxa de juros mensal: ");
    scanf("%f", &taxa_juros);

    printf("Entre o periodo em meses: ");
    scanf("%f", &periodo);
    
    valor_juros = valor_financiado * (taxa_juros / 100) * periodo;
    valor_total = valor_juros + valor_financiado;

    printf("O valor total, apos os calculos eh de: %.2f", valor_total);

}