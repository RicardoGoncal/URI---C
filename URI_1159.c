#include <stdio.h>

int main(){
	
	int soma,i,k,n;
	scanf("%d", &n);
	
	while(n != 0){
		i = 0;
		soma = 0;
		k = n;
		while( i != 5){
			if( k % 2 == 0){
				soma = soma + k;
				i++;
				k++;
			}
			else{
				k++;
			}
		}
		
		printf("%d\n", soma);
		scanf("%d", &n);
	}
	
	
	return 0;
}
