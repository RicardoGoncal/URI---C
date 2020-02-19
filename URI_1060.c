#include<stdio.h>

int main(){
	
	float vals; 
	int soma,i;
	
	i = 1;
	soma = 1;
	
	while(i < 6 ){
		
		scanf("%f", &vals);
		
		if(vals > 0 ){
			soma = soma + 1;
		}
		i++;
	}
	
	printf("%d valores positivos\n", soma);
	
	return 0;
}
