#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int termos, cont, soma = 0,seq = 0, casos = 0;

	scanf("%d", &termos);
	
while(casos != termos){
	
	scanf("%d", &seq);
	
	for ( cont = 1; cont <= seq; cont++){
		
		if(cont == 1){
			soma = 1;
		}
		else{
			if(cont % 2 == 0){
				soma = soma - 1;
			}
			else{
				soma = soma + 1;
			}
		}
	}
	
	printf("%d\n", soma);
	casos++;
}
	return 0;
}
