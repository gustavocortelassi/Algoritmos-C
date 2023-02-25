#include <stdio.h>
#include <math.h> // biblioteca matemática utilizada para calcular potencia
                  // pow(base, potencia) ----- sqrt(valor)
                  // pow -> calcula valores elevados a potencia
                  // sqrt -> tira a raiz quadrada do numero

int main(){

    float x1, y1, x2, y2, distancia;

    printf("Entre com a coordenada x1 e y1: \n");
    scanf("%f %f", &x1, &y1);

    printf("Entre com a coordenada x2 e y2: \n");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    printf("A distancia entre os pontos eh de: %.2f", distancia);
    return 0;
}