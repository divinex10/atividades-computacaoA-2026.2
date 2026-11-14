#include<stdio.h>
#include<locale.h>

int main(){
	int idade, parcelas;
	float salario, valor, valor_parcelas;
	
	setlocale(LC_ALL, "");
	printf("=======================================");
	printf("\nBora pegar um empréstimo sô?\n");
	printf("=======================================");
	
	printf("\nDigite a idade do Solicitante do Empréstimo: ");
	scanf("%d", &idade);
	printf("Digite o salário mensal do solicitante: R$ ");
	scanf("%f", &salario);
	printf("Digite o valor desejado para o empréstimo: R$");
	scanf("%f", &valor);
	printf("Digite a quantidade de parcelas desejada: ");
	scanf("%i", &parcelas);
	
	//processamento
	valor_parcelas = valor / parcelas;
	
	
	if(idade >= 18 && idade <= 65 && salario >= 2000 && salario * 0.3 <= valor_parcelas && parcelas >= 1 && parcelas <=48){
		printf("Empréstimo aprovado!");
	}else{
		printf("Empréstimo Negado!");
	}
}
