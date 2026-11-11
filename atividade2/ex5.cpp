#include <stdio.h>

int main() {
    float salario, percentual, imposto, salario_final;
    int categoria;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite a categoria de tributacao: ");
    scanf("%d", &categoria);

    if (categoria == 0) {
        percentual = 0;
    } else if (categoria == 1) {
        percentual = 10;
    } else if (categoria == 2) {
        percentual = 15;
    } else if (categoria == 3) {
        percentual = 20;
    } else {
        printf("Categoria invalida.\n");
        return 0;
    }

    imposto = salario * percentual / 100;
    salario_final = salario - imposto;

    printf("\nSalario original: R$ %.2f\n", salario);
    printf("Percentual aplicado: %.2f%%\n", percentual);
    printf("Valor do imposto: R$ %.2f\n", imposto);
    printf("Salario apos a deducao: R$ %.2f\n", salario_final);

    return 0;
}
