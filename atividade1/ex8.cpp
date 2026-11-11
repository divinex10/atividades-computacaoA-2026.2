#include <stdio.h>

int main() {
    char cliente[100], lanche[100], bebida[100];
    int quantidade_lanches, quantidade_bebidas;
    float preco_lanche, preco_bebida, valor_recebido, total_lanches, total_bebidas, total_pedido, troco;

    printf("Nome do cliente: ");
    fgets(cliente, 100, stdin);

    printf("Nome do lanche: ");
    fgets(lanche, 100, stdin);

    printf("Quantidade de lanches: ");
    scanf("%d", &quantidade_lanches);

    printf("Preco do lanche: ");
    scanf("%f", &preco_lanche);

    getchar();

    printf("Nome da bebida: ");
    fgets(bebida, 100, stdin);

    printf("Quantidade de bebidas: ");
    scanf("%d", &quantidade_bebidas);

    printf("Preco da bebida: ");
    scanf("%f", &preco_bebida);

    printf("Valor recebido: ");
    scanf("%f", &valor_recebido);

    total_lanches = quantidade_lanches * preco_lanche;
    total_bebidas = quantidade_bebidas * preco_bebida;
    total_pedido = total_lanches + total_bebidas;
    troco = valor_recebido - total_pedido;

    printf("\nPedido de %s", cliente);
    printf("%d %s", quantidade_lanches, lanche);
    printf("%d %s", quantidade_bebidas, bebida);
    printf("Total dos lanches: R$ %.2f\n", total_lanches);
    printf("Total das bebidas: R$ %.2f\n", total_bebidas);
    printf("Valor total do pedido: R$ %.2f\n", total_pedido);
    printf("Valor recebido: R$ %.2f\n", valor_recebido);
    printf("Troco: R$ %.2f\n", troco);
    printf("\nObrigado pela preferencia, %s", cliente);

    return 0;
}
