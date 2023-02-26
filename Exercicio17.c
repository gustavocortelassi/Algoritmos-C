#include <stdio.h>
#include <math.h>

int main(){

    float aresta, area;

    printf("Entre com a medida da aresta: ");
    scanf("%f", &aresta);

    area = (sqrt(3)) * pow(aresta, 2);

    printf("A area do tetaedro eh: %.2f", area);

    return 0;
}