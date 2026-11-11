#include <stdio.h>

int main() {
    char funcionario[100];
    int codigo;
    float valor_hora, horas_normais, horas_extras, pagamento_normal, pagamento_extra, salario_bruto, desconto, salario_liquido;
    
    printf("Nome do funcionario: ");
    fgets(funcionario, 100, stdin);

    printf("Codigo funcional: ");
    scanf("%d", &codigo);

    printf("Valor da hora: ");
    scanf("%f", &valor_hora);

    printf("Horas normais trabalhadas: ");
    scanf("%f", &horas_normais);

    printf("Horas extras: ");
    scanf("%f", &horas_extras);

    pagamento_normal = valor_hora * horas_normais;
    pagamento_extra = valor_hora * 1.5 * horas_extras;
    salario_bruto = pagamento_normal + pagamento_extra;
    desconto = salario_bruto * 8 / 100;
    salario_liquido = salario_bruto - desconto;

    printf("\nFuncionario: %s", funcionario);
    printf("Codigo: %d\n", codigo);
    printf("Pagamento pelas horas normais: R$ %.2f\n", pagamento_normal);
    printf("Pagamento pelas horas extras: R$ %.2f\n", pagamento_extra);
    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto realizado: R$ %.2f\n", desconto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
