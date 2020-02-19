#include <stdio.h>

// Exercicio 1117 URI

int main(){
	
	float media,soma,nota;
	int n;
	
	n = 0;
	
	while(n < 2){
		scanf("%f", &nota);
		
		if(nota >= 0 && nota <= 10){
			soma = soma + nota;
			n++;
		}
		else{
			printf("nota invalida\n");
		}
	}
	printf("media = %.2f\n", soma / 2);
	
	
	return 0;
}
