#include<stdio.h>

int main(){
	int escolha, contador = 0;
	
	printf("Digite o numero de termos que serao impressos na tela: ");
	scanf("%i", &escolha);
	
	for(int i = 1;contador < escolha;i++){
		
		printf("%i ", i);
		contador ++;
		
		for(int j = 1; j <= 2 && contador < escolha; j++){
		printf("%i ", i + 3);
		contador++;
		
		}
	}

	return 0;
}
