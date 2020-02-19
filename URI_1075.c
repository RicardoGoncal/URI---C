#include <stdio.h>

int main(){
	
	int N, cont;
	
	printf("Digite um valor: ");
	scanf("%d", &N);
	
	cont = 1;
	
	while(cont < 10000 ){
		
		if(cont % N == 2){
			printf("%d\n", cont);
		}
	cont++;
	}
	
	
	return 0;
}
