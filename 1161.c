#include <stdio.h>


int main(){
	
	 unsigned long int M,N,fat_m,fat_n;
	
	while(scanf("%lu%lu", &M,&N) != EOF){
		
			if(M == 0){
				fat_m = 1;
			}
			else{
				
				for(fat_m = 1; M >= 1; M--){
				fat_m = fat_m * M;
				}
			}
				if(N == 0){
					fat_n = 1;
				}
				else{
					for(fat_n = 1; N > 1; N--){
					fat_n = fat_n * N;
					}
				}
				printf("%lu\n", fat_m + fat_n);	
	}

	return 0;
	
}
