#include <stdio.h>
#include <math.h>

int main() {
    char proprietario[100];
    float raio, preco_grama, preco_cerca, area, cerca, custo_grama, custo_cerca, custo_total;

    printf("Nome do proprietario: ");
    fgets(proprietario, 100, stdin);

    printf("Raio do terreno: ");
    scanf("%f", &raio);

    printf("Preco do m2 da grama: ");
    scanf("%f", &preco_grama);

    printf("Preco do metro da cerca: ");
    scanf("%f", &preco_cerca);

    area = M_PI * pow(raio, 2);
    cerca = 2 * M_PI * raio;

    custo_grama = area * preco_grama;
    custo_cerca = cerca * preco_cerca;
    custo_total = custo_grama + custo_cerca;

    printf("\nProprietario: %s", proprietario);
    printf("Raio do terreno: %.2f m\n", raio);
    printf("Area para instalacao da grama: %.2f m2\n", area);
    printf("Quantidade de cerca necessaria: %.2f m\n", cerca);
    printf("Custo da grama: R$ %.2f\n", custo_grama);
    printf("Custo da cerca: R$ %.2f\n", custo_cerca);
    printf("Custo total estimado: R$ %.2f\n", custo_total);

    return 0;
}
