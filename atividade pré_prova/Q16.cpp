#include<stdio.h>

int main(){
	int estoque, decisao, adicao, venda;
	
	printf("Digite a quantidade inicial de itens no estoque: ");
	scanf("%i", &estoque);
	
	if(estoque <=0){
		printf("Valor invalido.");
		
	}else{
		do{
			printf("[1]Adicionar produtos ao estoque\n[2]Realizar venda\n[3]Consultar estoque\n[4]Sair\nEscolha uma opcao: ");
			scanf("%i", &decisao);
			
			switch(decisao){
				case 1:{
					printf("Quantidade de itens que deseja adicionar: ");
					scanf("%i", &adicao);
					
					if(adicao > 0){
						estoque += adicao;
						printf("Itens adicionados com sucesso!");
						printf("\n\n");
						
					}else{
						printf("Opcao invalida!");
						printf("\n\n");
						
					}
					break;
				}
					
				case 2:{
					printf("Digite a quantidade de itens que serao vendidos: ");
					scanf("%i", &venda);
					
					if(venda <= 0){
						printf("Quantidade invalida!");
						printf("\n\n");
						
					}else if(venda > estoque){
						printf("Nao ha estoque suficiente!");
						printf("\n\n");
						
					}else{
						estoque -= venda;
						printf("Venda concluida!");
						printf("\n\n");
					}
					break;
				}
				
				case 3:{
					printf("Estoque disponivel: %i", estoque);
					printf("\n\n");
					break;
				}
				
				case 4:{
					printf("Encerrando o sistema...");
					break;
				}	
				default:{
					printf("Opção invalida! Tente novamente...");
					break;
				}
			}
		}while(decisao != 4);
	}
	return 0;
}
