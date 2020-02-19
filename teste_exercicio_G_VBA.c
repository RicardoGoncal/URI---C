#include<stdio.h>
#include<stdlib.h>

int main(){
	
	// vetor lista
	int lista[] = {9,3,5,7,8,4,4,7};
	
	// Atribuir o tamanho do vetor
	int tam = sizeof(lista)/sizeof(int);
	
	// Declaracoes de variaveis comuns
	int i,j,k,soma      ;
	int x;
	
	// Exibir o valor do vetor antes
	
	for ( i = 0; i < tam; i++){
		printf("%d ", lista[i]);
	}
	
	// pedir ao usuario que digite quantos numeros maiores ele quer retornar na sequencia sem mexer na lista
	printf("\nDigite o numero de elementos maiores da lista sem alterar a ordem: ");
	scanf("%d", &x);
	
	printf("%d", x);	
	return 0;
	
}


