#include <stdio.h>

int main(){
	
	int fat = 1 , i, n;
	
//	printf("digite numero para saber fatorial: \n");
	scanf("%d", &n);
	
	for(i = n; i >= 1; i-- ){
	
		fat = fat * i ;
	}
	
	printf("%d\n", fat);
	return 0;
}
