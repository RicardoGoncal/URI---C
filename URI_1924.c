#include <stdio.h>

int main(){
	
	int n,i;
	char curso[100];
	
	printf("Digite um valor: \n");
	scanf("%d", &n);
	
	i=0;
	
    do{
    	
    	gets(curso);
    	
    	i++;
    	
	}while(i <= n);
	
	printf("Ciencia da Computacao\n");
	
	
	return 0;
}
