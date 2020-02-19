#include <stdio.h>


int main(){
	
	int vetor[1000], t, i=0,c = 0,sub = 0;
	
	scanf("%d", &t);
	
	while(i < 1000){
	sub = t;
		for(c =0; c != t && i < 1000; c++){
			printf("N[%d] = %d\n",i,t - sub);
			sub = sub-1;
			i++;
		}
	}	

	return 0;
}
