#include<stdio.h>

int main(){
	float salario_inicial = 1000, reajuste = 0.015;
	int ano_inicial = 2019, ano_final;
	
	printf("Salario em %i = %.2f\n", ano_inicial, salario_inicial += salario_inicial * reajuste);
	printf("Informe o ano atual: ");
	scanf("%i", &ano_final);
	
	for(ano_inicial; ano_inicial < ano_final; ano_inicial++){
		reajuste = reajuste * 2;
		
		printf("Percentual acumulado de aumento foi igual a: %.2f\n", reajuste * 100);
		printf("Salario em %i foi igual a %.2f\n", ano_inicial + 1, salario_inicial += salario_inicial * reajuste);
		printf("\n");
    
	}
	
	return 0;
}
