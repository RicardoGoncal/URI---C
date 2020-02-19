#include <stdio.h>

int main(){
	
	int l, c , i , j   ;
	int vl[100][100];
	
	printf("Digite o numero de linhas: \n");
	scanf("%d", &l);
	
	printf("Digite o numero de colunas: \n");
	scanf("%d", &c);
	
	//vl[1][1] = 0;
	

		
	for(i = 1; i <= l; i++){
		
		for(j = 1; j <= c; j++){
			printf("%d ", vl[i][j]);
		}
		printf("\n");
	}
		
	
	return 0;
}
