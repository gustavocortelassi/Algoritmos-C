#include <stdio.h>

int main(){

    float base_maior, base_menor, altura, area;

    printf("Informe a base maior: \n");
    scanf("%f", &base_maior);

    printf("Informe a base menor: \n");
    scanf("%f", &base_menor);

    printf("Informe a altura: \n");
    scanf("%f", &altura);

    area = ((base_maior + base_menor) / 2) * altura;

    printf("A area do trapezio eh: %.2f", area);

    return 0;
}