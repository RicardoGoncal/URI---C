#include <stdio.h>

int main(){
	
	int M,N,ini,fim,i,soma;
	
	scanf("%d%d", &M, &N);
	
	while(M > 0 && N > 0){
	
		soma = 0;
		
		if(M > N){
			ini = N;
			fim = M;
		}
		else{
			ini = M;
			fim = N;
		}
		
		for(i = ini; i <= fim; i++){
			
			printf("%d", i);
			soma = soma + i;
		}
		
		printf("Sum=%d\n", soma);
		
		scanf("%d%d", &M, &N);
	}
	
	return 0;
}
