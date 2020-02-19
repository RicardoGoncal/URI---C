#include <stdio.h>

int main(){
	
	int n,i=1,j=0;
	
	scanf("%d", &n);

		for( i = 1; i <= n * 4; i++){
			printf("%d ", i);
			j++;
			if( j == 3){
				printf("PUM\n");
				j =0;
				i++;
			}
			
		}
		
	return 0;
}
