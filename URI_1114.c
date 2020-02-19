#include<stdio.h>

int main(){
	
	int senha_cor, tentar_senha;
	
	senha_cor = 2002;
	
	while( tentar_senha != senha_cor){
		
		scanf("%d", &tentar_senha);
		
		if(tentar_senha != senha_cor){
			printf("Senha Invalida\n");
		}
	}
	
	printf("Acesso Permitido\n");
	
	
	
	
	return 0;
}
