#include <stdio.h>

int main(){
	
	int num, cont, teste,soma_in,soma_out;
	
	scanf("%d", &num);
	
	cont= 1;
	soma_in = 0;
	soma_out = 0;
	
	while(cont <= num){
		
		scanf("%d", &teste);
		
		if(teste >= 10 && teste <= 20){
			soma_in++;
		}
		else{
			soma_out++;
		}
		cont++;
	}
	
	printf("%d in\n",soma_in);
	printf("%d out\n",soma_out);
	
	return 0;
	
}
