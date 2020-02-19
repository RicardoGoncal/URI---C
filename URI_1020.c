#include<stdio.h>

int main(){
	
	int n, ano,mes,dias;
	
	scanf("%d", &n);
	
	if (n > 0 && n < 30){
		
		ano = 0;
		mes = 0;
		dias = n;
		
		printf("%d ano(s)\n",ano);
		printf("%d mes(es)\n",mes);
		printf("%d dia(s)\n",dias);
	}
	else if( n < 365){
		
		ano = 0;
		mes = n / 30;
		dias = n % 30;
		
		printf("%d ano(s)\n",ano);
		printf("%d mes(es)\n",mes);
		printf("%d dia(s)\n",dias);
	}
	else{
		
		ano = n / 365;
		mes = (n % 365) / 30;
		dias = (n % 365) % 30;
		
		printf("%d ano(s)\n",ano);
		printf("%d mes(es)\n",mes);
		printf("%d dia(s)\n",dias);
	}
		
	
	return 0;
}
