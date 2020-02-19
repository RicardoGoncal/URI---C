#include <stdio.h>

int main(){
	
	int num, contador;
	
	printf("Digite um valor: ");
	scanf("%d", &num);
	
	for(contador = 1; contador <= 10; contador ++){
		printf("%d x %d = %d\n", contador,num, contador * num);
	}
	
	
	return 0;
}
