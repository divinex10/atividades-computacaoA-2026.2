#include<stdio.h>

int main(){
	float salario, novo_salario;
	
	printf("Digite o salário do funcionário: R$");
	scanf("%f", &salario);
	
	if (salario <= 500){
		novo_salario = salario + (salario * 0.05) + 150;
	}else if(salario > 500 && salario <= 1200){
		novo_salario = salario + (salario * 0.12);
		if(salario <= 600){
			novo_salario += 150;
		}else{
		novo_salario += 100;
		}		
	}else if(salario > 1200){
		novo_salario = salario + 100;
	}
	
	printf("Novo salário: R$%.2f", novo_salario);
	
	return 0;
}
