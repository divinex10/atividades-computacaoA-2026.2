#include<stdio.h>

int main(){
	int escolha;
	float numero;
	char mensagem[100];
	
	printf("[1]Exibir mensagem\n[2]Calcular quadrado de um número\n[3]Calcular cubo de um número\nEscolha uma opção: ");
	scanf("%d", &escolha);
	getchar();
	
	switch(escolha){
		case 1:{
			printf("Digite a mensagem para exibir: ");
			fgets(mensagem, sizeof(mensagem), stdin);
			
			printf("\nMensagem: %s", mensagem);
			break;
		}
		case 2:{
			printf("Digite o número para elevar ao quadrado:");
			scanf("%f",&numero);
			
			printf("%.0f ao quadrado é igual:%.0f ",numero,  numero * numero);
			break;
		}
		case 3:{
			printf("Digite o número para elevar ao cubo: ");
			scanf("%f",&numero);
			
			printf("%.0f ao quadrado é igual:%.0f ",numero, numero * numero * numero);
			break;
		}
		
	}
	
	return 0;
}
