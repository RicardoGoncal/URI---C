#include <stdio.h>

int main(){
	
	int N,T,c    ;
	
	printf("Digite um valor para N: ");
	scanf("%d", &N);
	
	for(c=0 ; c < N ; c++){
		printf("Digite um valor para T: ");
		scanf("%d", &T);
		
		if(T < 2015){
			printf("%d D.C.\n",(2015 - T));
		}
		else if ( T == 2015){
			printf("1 A.C.\n");
		}
		else{
			printf("%d A.C.\n", (T - 2015) + 1);
		}
	}
	
	return 0;
}
