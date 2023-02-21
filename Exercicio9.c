#include <stdio.h>

int main()
{
    double eleitores, votos_brancos, votos_nulos, votos_validos;

    printf("Entre com o total de eleitores do municipio:  ");
    scanf("%lf", &eleitores);

    printf("Entre com o total de votos brancos do municipio: ");
    scanf("%lf", &votos_brancos);

    printf("Entre com o total de votos nulos do municipio: ");
    scanf("%lf", &votos_nulos);

    printf("Entre com o total de votos validos do municipio: ");
    scanf("%lf", &votos_validos);

    double porcentagem_brancos = (votos_brancos / eleitores) * 100;
    double porcentagem_nulos = (votos_nulos / eleitores) * 100;
    double porcentagem_validos = (votos_validos / eleitores) * 100;

    printf("\nA porcentagem de votos do municipio correspondem a:\n");
    printf("Votos brancos %.2lf%%,\n", porcentagem_brancos);
    printf("Votos nulos %.2lf%%,\n", porcentagem_nulos);
    printf("Votos validos %.2lf%%\n", porcentagem_validos);

    return 0;
}