#include <stdio.h>
#include <math.h>


int main(){
	
	int a,b,c,maiorab,maiorab_c;
	
	scanf("%d%d%d", &a,&b,&c);
	
	maiorab = (a+b + abs(a-b)) / 2;
	
	maiorab_c = (maiorab+c + abs(maiorab-c)) / 2;
	
	printf("%d eh o maior\n", maiorab_c);
	
	return 0;
	
}
