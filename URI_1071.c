#include<stdio.h>

int main(){
	
	int x,y,i,ini,fim,soma = 0;
	
	scanf("%d%d", &x, &y);
	
	// Verificação para iniciar contagem
	
	if(x > y){
		ini = y;
		fim = x;
	}
	else{
		ini = x;
		fim = y;
	}
	
	for(i = ini + 1; i < fim; i++){
		
		if(i % 2 == 1 || i % 2 == -1){
			soma = soma + i;
		}
		
	}
	
	printf("%d\n", soma);
	
	return 0;
}
