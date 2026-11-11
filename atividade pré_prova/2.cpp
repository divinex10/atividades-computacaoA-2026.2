#include<stdio.h>

int main(){
	
	float n1, n2, n3, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	printf("Média final: %.2f", media);
	
	if(media >= 0 && media < 3){
		printf("\nSituação: Reprovado!");
	}else if(media >= 3 && media < 7){
		printf("\nSituação: Exame!");
	}else{
		printf("\nSituação: Aprovado!");
	}
	
	return 0;
}
