#include <stdio.h>

int main(){
	
	int i,j,k;
	
	for(i=1; i<=9; i = i +2 ){
		k=0;
		for(j=1;j<=3;j++){
			printf("I=%d J=%d\n", i, i+6-(k));
			k++;
		}
	}
			
	return 0;
}
