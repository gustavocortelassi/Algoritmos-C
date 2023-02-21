#include <stdio.h>

int main()
{

    int num1, num2, soma, subtracao, divisao, multiplicacao;

    printf("Digite dois numeros ");
    scanf("%d %d", &num1, &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    divisao = num1 / num2;
    multiplicacao = num1 * num2;

    printf("\nA soma de %d e %d = %d", num1, num2, soma);
    printf("\nA subtracao de %d e %d = %d", num1, num2, subtracao);
    printf("\nA divisao de %d e %d = %d", num1, num2, divisao);
    printf("\nA multiplicacao de %d e %d = %d", num1, num2, multiplicacao);

    return 0;
}