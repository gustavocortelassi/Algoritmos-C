#include <stdio.h>

int main(){

    float custo_fabrica, porcentagem_distribuidor, porcentagem_impostos, valor;

    printf("Informe o custo de fabrica do veiculo: ");
    scanf("%f", &custo_fabrica);

    porcentagem_distribuidor = 0.28 * custo_fabrica;
    porcentagem_impostos = 0.45 * custo_fabrica;

    valor = custo_fabrica + porcentagem_distribuidor + porcentagem_impostos;

    printf("O valor final do veiculo eh de: %.2f", valor);

    return 0;
}