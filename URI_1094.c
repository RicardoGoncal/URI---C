#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int cont;
	int casos;
	char animal;
	int sapo = 0,coelho = 0,rato = 0, qtd_teste;
	int soma = 0;
	
	//printf("Digite o numero de casos de teste: ");
	scanf("%d", &casos);
	
	for(cont = 0; cont < casos; cont++){
		
		//printf("Digite a qtd de testes no animal: ");
		scanf("%d", &qtd_teste);
		//printf("Digite a letra do animal escolhido: ");
		scanf(" %c", &animal);
		
		soma = soma + qtd_teste;
		
		switch(animal){
			
			case 'C':
					coelho = coelho + qtd_teste;
					break;
			case 'R':
					rato = rato + qtd_teste;
					break;
			case 'S':
					sapo = sapo + qtd_teste;
					break;
			
		}
	}

	printf("Total: %d cobaias\n", soma);
	printf("Total de coelhos: %d\n", coelho);
	printf("Total de ratos: %d\n", rato);
	printf("Total de sapos: %d\n", sapo);
	printf("Percentual de coelhos: %.2f %\n", ((float)coelho/soma) * 100);
	printf("Percentual de ratos: %.2f %\n",  ((float)rato/soma) * 100);
	printf("Percentual de sapos: %.2f %\n",  ((float)sapo/soma) * 100);
	
	return 0;
}
