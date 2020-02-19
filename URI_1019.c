#include<stdio.h>

int main(){
	
	int n, min, segs,horas;
	
	scanf("%d", &n);
	
	if(n >= 0 && n <60){
		min= 0;
		horas=0;
		printf("%d:%d:%d\n", horas, min, n);
	}
	else if(n >= 60 && n < 3600){
		
		horas = 0;
		min = n / 60;
		segs = (n % 60);
		
	//	printf("%d\n", segs);
		printf("%d:%d:%d\n",horas,min,segs);
	}
	else{
	
		horas = n / 3600;
		min = (n / 60)%60 ;
		segs = n % 60;
		
		//printf("%d\n",horas);
		//printf("%d\n",min);
		//printf("%d\n",segs);
		
		printf("%d:%d:%d\n",horas,min,segs);
	}		
	return 0;
}
