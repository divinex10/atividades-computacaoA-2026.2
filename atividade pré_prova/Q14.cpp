#include<stdio.h>

int main(){
	float chico = 1.50, ze = 1.10;
	int contador = 0;
	
	for(int i = 1; ze <= chico; i++){
		chico += 0.02;
		ze += 0.03;
		printf("Altura Chico: %.2f | Altura Ze: %.2f | ano: %i\n", chico, ze, i);
		contador = i;
	}
	printf("Em %i anos, ze, com %.2fm, sera mais alto do que chico, com %.2fm.", contador, ze, chico);
}
