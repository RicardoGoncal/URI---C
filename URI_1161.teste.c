#include<stdio.h>


int main(){
	
	int i,a,b;
	long long int fat[21];
	
	fat[0] = 1;
	fat[1] = 1;
	
	for(i = 2; i <= 20; i++){
		
		fat[i] = i * fat[i-1];	
	}
	
	while(scanf("%d%d", &a, &b) != EOF){
		
		printf("%lld\n", fat[a] + fat[b]);

	}

	return 0;
	
}
