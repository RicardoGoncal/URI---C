#include<stdio.h>


int main(){
	
	int n_casos, x,cont,cont2,soma = 0, aux;
	
	scanf("%d", &n_casos);
	
	cont = 1;
	
	while(cont <= n_casos){
		
		scanf("%d",&x);
		soma = 0;
		for(cont2 = 1; cont2 < x; cont2++){
			
			if(x % cont2 == 0){
				soma = soma + cont2;
			}	
		}
		if(soma == x){
				printf("%d eh perfeito\n", x);
			}
			else{
				printf("%d nao eh perfeito\n", x);
			}
			
			cont++;
	}
	
	return 0;
	
}
