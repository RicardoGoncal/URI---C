#include <stdio.h>

int main(){
	
	int N[10], v,i;
	
	scanf("%d", &v);
	
	for(i=0; i < 10; i++){
		
		if(i == 0){
			N[0] = v;
			i++;
		}
		N[i] = 2 * N[i - 1];
	}
	
	for(i=0;i < 10; i++){
		printf("N[%d] = %d\n", i,N[i]);
	}
	
	
	return 0;
}
