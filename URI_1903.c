#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int t1,t2,t3,t4,soma;
	
	printf("Digite a qtd de cada regua: ");
	scanf("%d%d%d%d", &t1,&t2,&t3,&t4);
	
	soma = t1+t2+t3+t4;
	soma = soma - 3;
	
	printf("%d\n", soma);
	
	return 0;
}
