#include <stdio.h>

int main() {
    int codigo;
    float salario, percentual, aumento, novo_salario;

    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigo);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    switch (codigo) {
        case 1:
            printf("Cargo: Escriturario\n");
            percentual = 50;
            break;

        case 2:
            printf("Cargo: Secretario\n");
            percentual = 35;
            break;

        case 3:
            printf("Cargo: Caixa\n");
            percentual = 20;
            break;

        case 4:
            printf("Cargo: Gerente\n");
            percentual = 10;
            break;

        case 5:
            printf("Cargo: Diretor\n");
            percentual = 0;
            break;

        default:
            printf("Codigo de cargo invalido.\n");
            return 0;
    }

    aumento = salario * percentual / 100;
    novo_salario = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
