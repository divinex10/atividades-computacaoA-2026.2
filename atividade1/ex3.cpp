#include <stdio.h>

int main() {
    char motorista[100], destino[100];
    float distancia, consumo, preco_combustivel, pedagios, combustivel_necessario, custo_combustivel, custo_total, custo_por_km;

    printf("Nome do motorista: ");
    fgets(motorista, 100, stdin);

    printf("Cidade de destino: ");
    fgets(destino, 100, stdin);

    printf("Distancia da viagem: ");
    scanf("%f", &distancia);

    printf("Consumo do veiculo: ");
    scanf("%f", &consumo);

    printf("Preco do combustivel: ");
    scanf("%f", &preco_combustivel);

    printf("Valor dos pedagios: ");
    scanf("%f", &pedagios);

    combustivel_necessario = distancia / consumo;
    custo_combustivel = combustivel_necessario * preco_combustivel;
    custo_total = custo_combustivel + pedagios;
    custo_por_km = custo_total / distancia;

    printf("\nMotorista: %s", motorista);
    printf("Destino: %s", destino);
    printf("Distancia da viagem: %.2f km\n", distancia);
    printf("Combustivel necessario: %.2f litros\n", combustivel_necessario);
    printf("Custo com combustivel: R$ %.2f\n", custo_combustivel);
    printf("Custo com pedagios: R$ %.2f\n", pedagios);
    printf("Custo total da viagem: R$ %.2f\n", custo_total);
    printf("Custo medio por quilometro: R$ %.2f\n", custo_por_km);

    return 0;
}
