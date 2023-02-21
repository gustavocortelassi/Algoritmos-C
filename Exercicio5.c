#include <stdio.h>

int main()
{
    int anos, meses, dias, idade_dias;

    printf("Entre com sua idade em anos: ");
    scanf("%d", &anos);

    printf("Entre com sua idade em meses: ");
    scanf("%d", &meses);

    printf("Entre com sua idade em dias: ");
    scanf("%d", &dias);

    idade_dias = (anos * 365) + (meses * 30) + dias;

    printf("\nSua idade em dias eh: %d", idade_dias);

    return 0;

}