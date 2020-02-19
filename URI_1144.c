#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, aux, i, k;
	
	
	printf("Digite um numero para sequencia: ");
	scanf("%d", &num);
	
	i=1;
	
	while(i <= num){
		aux =1;	
		while(aux != 2){
				if(aux == 1){
				printf("%d %d %d\n", i,i*i,i*i*i);
				aux++;	
				}
				if(aux ==2){
					printf("%d %d %d\n", i,(i*i)+1,(i*i*i)+1);
				}	
		}
	i++;
	}
	return 0;
}
