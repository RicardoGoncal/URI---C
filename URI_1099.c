#include <stdio.h>

// URI 1099

int main(){
	
	int casos, x,y,soma, i,j;
	
	j = 0;
	
	scanf("%d", &casos);
	
	while(j < casos){
		
		scanf("%d%d", &x,&y);
		soma = 0;
		
		if(x < y){
			for(i = x + 1; i < y;i++){
				if(i % 2 == 1){
					soma = soma + i;
				}
			}
			printf("%d\n", soma);
			j++;
		}
		else{
			for(i = y + 1 ; i < x ; i++){
				if(i % 2 == 1){
					soma = soma + i;
				}
			}
			printf("%d\n", soma);
			j++;
		}
	}
	
	return 0;
}
