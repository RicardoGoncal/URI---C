#include <stdio.h>

int main(){
	
	int porcao[4];
	int porc, c, soma =0;
	
	for(porc = 0; porc < 5; porc++){
		scanf("%d", &porcao[porc]);
	}
	
	for(c = 0; c < 5; c++){
		
		switch(c){
			case 0:
				soma = soma + (porcao[c] * 300);
				break;
			case 1:
				soma = soma + (porcao[c] * 1500);
				break;
			case 2:
				soma = soma + (porcao[c] * 600);
				break;
			case 3:
				soma = soma + (porcao[c] * 1000);
				break;
			case 4:
				soma = soma + (porcao[c] * 150);
				break;
		}
	}
	
	printf("%d\n", soma + 225);
	return;
}
