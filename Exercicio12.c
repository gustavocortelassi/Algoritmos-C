#include <stdio.h>

int main(){

    int notaA, notaB, notaC, media;

    printf("Entre com o valor da primeira nota: ");
    scanf("%i", &notaA);

    printf("Entre com o valor da segunda nota: ");
    scanf("%i", &notaB);

    printf("Entre com o valor da terceira nota: ");
    scanf("%i", &notaC);

    media = (notaA + notaB + notaC) / 3;

    printf("A media destas notas eh: %i", media);

    return 0;
}