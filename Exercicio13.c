#include <stdio.h>

int main(){

    int A, B, C, D, R, S;

    printf("Entre o valor para a variavel A: ");
    scanf("%i", &A);

    printf("Entre o valor para a variavel B: ");
    scanf("%i", &B);

    printf("Entre o valor para a variavel C: ");
    scanf("%i", &C);

    R = ((A * A) + (A * B) + (B * A) + (B * B));
    S = ((B * B) + (B * C) + (C * B) + (C * C));
    D = (R + S) / 2;

    printf("O resultado da expressao eh: %i", D);

    return 0;
}