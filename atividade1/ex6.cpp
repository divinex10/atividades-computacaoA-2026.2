#include <stdio.h>

int main() {
    char atividade[100], sala;
    int duracao, horas, minutos, segundos;

    printf("Nome da atividade: ");
    fgets(atividade, 100, stdin);

    printf("Sala: ");
    scanf(" %c", &sala);

    printf("Duracao em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    minutos = (duracao % 3600) / 60;
    segundos = duracao % 60;

    printf("\nAtividade: %s", atividade);
    printf("Sala: %c\n", sala);
    printf("Tempo registrado: %d segundos\n", duracao);
    printf("Duracao da atividade: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
