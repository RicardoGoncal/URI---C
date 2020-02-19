#include <stdio.h>


int main(){
	
	int n, x,y,i=0,c,soma,k;

	printf("Numero de repeticao: \n");
	scanf("%d", &n);
		
	while(i < n){
		
		//printf("Digite 2 numeros: \n");
		scanf("%d%d", &x,&y);
		k = x;
		c=0;
		soma = 0;
		while(c != y){
			
			if(k % 2 == 1 || k % 2 == -1){
				soma = soma + k;
				c++;
				k++;
			}
			else{
				k++;
			}
			
		}
		printf("%d\n", soma);
		i++;
	}
	return;
}
