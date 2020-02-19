#include <stdio.h>

int main(){
	
	int teste, res, cont = 0, ciclo;
	
	scanf("%d", &ciclo);
	while(ciclo != -1){
		
		res = ciclo / 2;
		cont ++;
		printf("Experiment %d: %d full cycle(s)\n", cont,res);
		scanf("%d", &ciclo);
	}
	
	return 0;
}
