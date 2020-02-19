#include <stdio.h>

int main(){
	
	int R1,R2,n_testes,c = 1;
	
	scanf("%d", &n_testes);
	
	while(c <= n_testes){
		
		scanf("%d%d", &R1, &R2);
		
		printf("%d\n", R1 + R2);
		
		c ++;
	}
	
	return 0;
	
}
