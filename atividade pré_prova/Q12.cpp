#include<stdio.h>

int main(){
	int decisao, numero, maior = 0, menor, n;
	
	printf("Digite a quantidade de números que deseja inserir: ");
	scanf("%i", decisao);
	
	for(int i = 1; i<= 5; i++){
		printf("\nDigite um número positivo: ");
		scanf("%i", n);
		
		if(i == 1){
			menor= n;
		}
		
		if(n > maior){
			maior = n;
		}else if(n < menor){
			menor = n;
		}
	}
	
	printf("\nO maior número é:%d\nO menor número é: %d", maior, menor);	
	
	return 0;
}
