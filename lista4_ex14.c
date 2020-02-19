#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int v_orig[10], v_rep[5], i, j, k, achei, repete; 
	
	srand(time(0));
	
	for (i=0; i<10; i++) {
		v_orig[i] = rand() % 10; // Gera��o dos numeros randomicos
	}
	
	k = 0; // contador vetor repetido
	for (i=0; i<9; i++) {
		repete = 0;  // atribui 0 a variavel repete.
		j=i+1;   // variavel J inicia na posi��o da frente no vetor.
		
		// La�o para verificar se tem ou n�o algum numero repetindo.
		while (j<10 && !repete) {
			if (v_orig[i] == v_orig[j]) {   // Verificando se posicao de i � igual posicao j ( de atras pelo da frente).
				repete = 1;  // Se for, ai repete atribui valor de 1.
			}
			else
				j++;  // Se n�o passa para a proxima posi��o da frente.
		}
		
		if (repete){      // Se caso repetir.
			achei = 0;  // Achei atribui 0.
			j = 0;  // J come�a valendo 0.
			
			// La�o para ver se encontra mais de um numero igual repetido.
			while (j<k && !achei) {
				if (v_orig[i] == v_rep[j]) {  // Se achar, variavel achei valer� true e saira do la�o.
					achei = 1; 
				}
				else {
					j++;  // Sen�o passa para a proxima posi��o do vetor.
				}
			}
			if (!achei) {
				v_rep[k] = v_orig[i];    // Em caso de n�o encontrar, grava o valor no vetor de repeti��es.
				k++;
			}
		}
	}
	
	printf("\n\nVetor Original\n");
		for (i=0; i<10; i++) {
			printf("%d ", v_orig[i]);
		}
		
		printf("\n\nVetor de Repeticoes\n");
		for (i=0; i<k; i++) {
			printf("%d ", v_rep[i]);
		}
	
	return 0;
}
