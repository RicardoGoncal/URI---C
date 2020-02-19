#include<stdio.h>
#include<stdlib.h>

int main(){
	
	// Vetor com elementos de valor duplicado 
	int vetor[] = {7,4,3,5,7,4,4,6,4,1,2};
	
	// Declaração das variaveis
	int i,j, k;  // contadores
	
	// Exibir tamnho do vetor
	
	int tam = sizeof(vetor)/ sizeof(int); 
	
	// Exibe o vetor antes 
	
	for(i=0; i < tam; i++){
		printf("%d ", vetor[i]);	
	}
	printf("\n");
	
	// Remover itens em duplicação
	
	for(i = 0; i < tam; i++){
		
		for(j = i + 1; j < tam;){
			
			if(vetor[j] == vetor[i]){
				
				for(k = j; k < tam; k++){
					
					vetor[k] = vetor[k+1];
				}
				tam --;	
			}
			else{
				j++;
			}	
		}	
	}
	
	// Exibe vetor apos a verificação de repetidos
	
	for(i = 0; i <tam; i++){
		printf("%d ", vetor[i]);
	}	
		
		

	return 0;
	
	
}

