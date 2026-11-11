#include <stdio.h>
#include <math.h>

int main() {
    char percurso[100];
    float x1, x2, y1, y2, distancia;

    printf("Nome do percurso: ");
    fgets(percurso, 100, stdin);

    printf("Coordenada X inicial: ");
    scanf("%f", &x1);

    printf("Coordenada Y inicial: ");
    scanf("%f", &y1);

    printf("Coordenada X final: ");
    scanf("%f", &x2);

    printf("Coordenada Y final: ");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nPercurso: %s", percurso);
    printf("Ponto inicial: (%.2f, %.2f)\n", x1, y1);
    printf("Ponto final: (%.2f, %.2f)\n", x2, y2);
    printf("Distancia entre os pontos: %.3f unidades\n", distancia);

    return 0;
}
