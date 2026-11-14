#include <stdio.h>
int main(){
    int limite, somaP = 0, somaI = 0;
    do {
        printf("Digite até qual número irá a sequência: ");
        scanf("%i", &limite);

        for(int i = 1; i<=limite; i++){
            if(i % 2 == 0){
                somaP += i;
            }else{
                somaI += i;
            }
        }
        printf("Soma dos números pares: %i\nSoma dos números impares: %i\n", somaP, somaI);
    } while(limite >0);
    return 0;
}
