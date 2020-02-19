#include <stdio.h>


int main(){
	
	int ki;
	int teste, cont;
	
//	printf("Testes a serem realizados: ");
	scanf("%d", &teste);
	
	cont = 0;
	
	while(cont < teste){
		
	//	printf("Digite o ki do personagem: ");
		scanf("%d", &ki);
		
		if(ki > 8000){
			printf("Mais de 8000!\n");
		}
		else{
			printf("Inseto!\n");
		}
		
		cont++;
	}
	
	return 0;
}
