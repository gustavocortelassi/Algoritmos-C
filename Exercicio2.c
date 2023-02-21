#include <stdio.h>

int main()
{

    int num1, antecessor, sucessor;

    printf("Digite um numero para ser calculado seu sucessor e antecessor: ");
    scanf("%d", &num1);

    antecessor = num1 - 1;
    sucessor = num1 + 1;

    printf("\nO antecessor de %d e %d\n", num1, antecessor);
    printf("\nO sucessor de %d e %d\n", num1, sucessor);

    return 0;
}