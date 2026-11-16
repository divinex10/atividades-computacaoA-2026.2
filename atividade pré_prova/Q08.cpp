#include<stdio.h>

int main(){
	int escolha_menu, escolha_acompanhamento;
	float valor_final = 0;
	
	do{
		printf("-----------MENU-----------");
		printf("\n[1]Picanha Grelhada - R$65,00\n[2]Filet de frango ao molho amadeirado - R$42,00\n[3]Massa penne ao molho pesto - R$38,00\n[4]Sair\nEscolha uma opcao: ");
		scanf("%i", &escolha_menu);
		
		switch(escolha_menu){
			case 1:{
				valor_final += 65;
				break;
			}
			case 2:{
				valor_final += 42;
				break;
			}
			case 3:{
				valor_final += 38;
				break;
			}
		}
			
		if(escolha_menu == 4){
			printf("Conta fechada.\nValor total: R$%.2f\n", valor_final);
            break;
		}
		
		printf("------Acompanhamentos------");
		printf("\n[1]Arroz bifum com alho poro - R$14,00\n[2]Batata frita tradicional - R$ 18,00\n[3]Salada caesar - R$16,00\n[4]Sair\nEscolha uma opcao: ");
		scanf("%i", &escolha_acompanhamento);
		printf("Pedido anotado. Em breve levamos ate a mesa.\n");	
		
		switch(escolha_acompanhamento){
			case 1:{
				valor_final += 14;
				break;
			}
			case 2:{
				valor_final += 18;
				break;
			}
			case 3:{
				valor_final += 16;
				break;
			}
			case 4:{
				printf("Pedido nao finalizado e conta fechada.\nValor total: R$%.2f", valor_final);
				break;
			}
		}		
		
	}while(escolha_menu != 4 || escolha_acompanhamento != 4);
	
	return 0;
}
