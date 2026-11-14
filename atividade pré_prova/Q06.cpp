#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned int)time(NULL));
    int numero_aleatorio = 1 + rand() % 10;
    int numero_escolhido = 0;

    printf("Jogo do número secreto\n");

    do{
        printf("Advinhe o número que estou entre 1 e 10: ");
        scanf("%d", &numero_escolhido);
        
        if(numero_escolhido > numero_aleatorio){
            printf("O número secreto é menor que %d\n", numero_escolhido);
        }else if(numero_escolhido < numero_aleatorio){
            printf("O número secreto é maior que %d\n", numero_escolhido);
        }

    }while(numero_escolhido != numero_aleatorio);

    printf("Parabéns! Você acertou.");
    
}
