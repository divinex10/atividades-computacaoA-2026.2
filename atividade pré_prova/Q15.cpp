#include <stdio.h>

int main(){
int n, valor = 1, soma = 0, acrescentador = 10;

printf("Digite o número de termos: ");
scanf("%i", &n);

for(int i= 1; i<=n; i++){
	printf("%i", valor);
	soma += valor;
	valor = valor + acrescentador;
	acrescentador *=10;
	
	if(i == n){
		printf(" ");
	}else{
		printf(" + ");
	}
}

printf("\nA soma é: %i", soma);

return 0;

}
