#include <stdio.h>

int main(){
	
	int saru , saur, dist;
	float icm;
	
	scanf("%d%d%d", &dist, &saur, &saru);
	
	icm = (float)dist / (saur + saru);
	
	printf("%.2f\n", icm );

	return 0;
}
