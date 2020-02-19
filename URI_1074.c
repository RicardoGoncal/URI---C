#include <stdio.h>

int main(){
	
	int teste, n_escolhido, cont;
	
	printf("Digite a quantidad de vezes que sera repetido: ");
	scanf("%d", &teste);
	
	cont = 1;
	
	while (cont <= teste){
		scanf("%d", &n_escolhido);
		
		if(n_escolhido == 0){
			printf("NULL\n");
		}
		else if(n_escolhido < 0){
			if(n_escolhido % 2 == 0){
				printf("EVEN NEGATIVE\n");
			}
			else{
				printf("ODD NEGATIVE\n");
			}
		}
		else{
			if(n_escolhido % 2 == 0){
				printf("EVEN POSITIVE\n");
			}
			else{
				printf("ODD POSITIVE\n");
			}
		}
		cont ++;
	}
	return 0;
}
