#include <stdio.h>

int main() {
    float numero1, numero2, numero3, maior;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);

    maior = numero1;

    if (numero2 > maior) {
        maior = numero2;
    }

    if (numero3 > maior) {
        maior = numero3;
    }

    printf("Maior numero: %.2f\n", maior);

    return 0;
}
