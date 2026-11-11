#include <stdio.h>

int main() {
    char cliente[100];
    char produto[100];
    int quantidade;
    float preco_unitario, desconto_percentual, valor_compra, valor_desconto, valor_final;
    
    printf("Nome do cliente: ");
    fgets(cliente, 100, stdin);

    printf("Nome do produto: ");
    fgets(produto, 100, stdin);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    printf("Preco unitario: ");
    scanf("%f", &preco_unitario);

    printf("Percentual de desconto: ");
    scanf("%f", &desconto_percentual);

    valor_compra = quantidade * preco_unitario;
    valor_desconto = valor_compra * desconto_percentual / 100;
    valor_final = valor_compra - valor_desconto;

    printf("\nCliente: %s", cliente);
    printf("Produto: %s", produto);
    printf("Quantidade adquirida: %d\n", quantidade);
    printf("Valor da compra: R$ %.2f\n", valor_compra);
    printf("Desconto concedido: R$ %.2f\n", valor_desconto);
    printf("Valor final a pagar: R$ %.2f\n", valor_final);

    return 0;
}
