#include <stdio.h>

int main(){

    float notaA, notaB, notaC, media;

    printf("Entre com a primeira nota: ");
    scanf("%f", &notaA);
    
    printf("Entre com a segunda nota: ");
    scanf("%f", &notaB);

    printf("Entre com a terceira nota: ");
    scanf("%f", &notaC);

    media = ((notaA + 2) + (notaB + 3) + (notaC + 5)) / (2 + 3 + 5);

    printf("A media deste aluno eh: %.2f", media);

    return 0;
}