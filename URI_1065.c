#include<stdio.h>


int main(){
	
	int valor,soma,cont;
	
	cont = 1;
	soma = 0;
	
	while(cont <= 5){
		
		scanf("%d", &valor);
		
			if(valor % 2 == 0){
				soma = soma + 1;
			}
		cont++;
	}
	
	printf("%d valores pares\n", soma);
	
	return 0;
	
}
