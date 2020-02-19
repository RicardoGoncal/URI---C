#include<stdio.h>

int main(){
	
	int N , Li , cont = 1, list[100],m2,m3,m4,m5    ;
	
	printf("Digite um valor para N: \n");
	scanf("%d", &N);
	
	for(cont = 1; cont <= N; cont++){
		
		printf("Digite um valor para lista que contem %d elementos: ", N);
		scanf("%d", &list[cont]);
		
	
	}
	
	return 0;
}
