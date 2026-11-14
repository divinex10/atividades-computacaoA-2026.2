#include<stdio.h>

int main(){
	int escolha;
	float valor, valor_convertido;
	
	printf("Digite o valor que será convertido: R$");
	scanf("%f", &valor);
	
	printf("[1]Dolar\n[2]Euro\n[3]Peso(arg)");
	printf("\nEscolha a moeda para conversao: ");
	scanf("%i", &escolha);
	
	switch(escolha){
		case 1:
			valor_convertido = valor / 5.59;
			printf("Conversão para dolar:\nReais: R$%.2f --> USD$%.2f", valor, valor_convertido);
			break;
			
		case 2:
			valor_convertido = valor / 6.24;
			printf("Conversão para euro:\nReais: R$%.2f --> EUR$%.2f", valor, valor_convertido);
			break;
			
		case 3:
			valor_convertido = valor / 0.0036;
			printf("Conversão para peso argentino:\nReais: R$%.2f --> ARS$%.2f", valor, valor_convertido);
			break;
			
		default:
			printf("Opcao invalida! Tente novamente!");
			break;
			
	}
	
	return 0;
}
