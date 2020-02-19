#include <stdio.h>

int main(){
	
	int cont, pos = 0; 
	float num, soma = 0.0;
	
	cont = 1;
	
	while(cont <= 6){
		
		scanf("%f", &num);
		
		if(num >= 0){
			soma = soma + num;
			pos ++;
		}
		cont ++;
	}
	
	printf("%d valores positivos\n", pos);
	printf("%.1f\n", soma / pos);
	
	return 0;
}
