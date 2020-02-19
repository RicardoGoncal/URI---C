#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int *duendes;
	int c;
	int n_reg;
	
//	printf("Digite o numero : ");
	scanf("%d", &n_reg);
	
	duendes = (int *)malloc(n_reg * sizeof(int));

	for(c=0; c < n_reg; c++){
		printf("numero do duende: ");
		scanf("%d", &duendes[c]);
	}
	
	
	return 0;
}
