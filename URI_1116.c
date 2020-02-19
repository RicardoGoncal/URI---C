#include<stdio.h>

int main(){
	
	int qtd_pares,i;
	float X,Y;
	
	scanf("%d", &qtd_pares);
	
	for(i = 1; i <= qtd_pares; i++){
		
		scanf("%f%f", &X,&Y);
		if(Y != 0){
			printf("%.1f\n", X / Y);
		}
		else{
			printf("divisao impossivel\n");	
		}	
	}
	
	return 0;
	
}
