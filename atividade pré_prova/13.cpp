#include<stdio.h>

int main(){
	int numero, decisao;
	
	printf("Digite a quantidade de números que deseja inserir: ");
	scanf("%i", &decisao);
	
	for(int i = 1;i<=decisao;i++){
		printf("Digite um número postivo: ");
		scanf("%i", &numero);
		
		if(numero % 2 == 0){
			printf("O primeiro número par encontrado é: %i", numero);
			break;
		}
		
	}
	
	if(numero % 2 == 0){
		return 0;
	}else{
		printf("Nenhum número par foi encontrado! bestão.");
	}	
	
	
	
	return 0;
}
