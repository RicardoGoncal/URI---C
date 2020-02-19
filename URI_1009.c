#include <stdio.h>

int main(){
	
	char nome;
	double a,b;
	
	scanf("%s%lf%lf",&nome,&a,&b);
	printf("TOTAL = R$ %.2lf\n", a + (b*0.15));
	
	return 0;
	
	
}
