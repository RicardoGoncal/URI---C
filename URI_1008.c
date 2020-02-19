#include <stdio.h>

int main(){
	int f,h_t;
	float s;
	
	scanf("%d%d%f", &f,&h_t,&s);
	
	printf("NUMBER = %d\n", f);
	printf("SALARY = U$ %.2f\n", h_t * s);
	
	return 0;
	
}
