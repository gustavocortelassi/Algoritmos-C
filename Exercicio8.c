#include <stdio.h>

int main()
{

    double peso, altura, imc;

    printf("\nEntre com o seu peso em kg:  ");
    scanf("%lf", &peso);

    printf("Entre com a sua altura em metros: ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    printf("\nO seu IMC eh: %2.lf", imc);
    return 0;
}