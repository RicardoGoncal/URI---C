#include <stdio.h>

int main(){
	
	int qtdP,qtdC, nped, i;
	float n1,n2,n3,n4,n5;
		n1 =0;
		n2 =0;
		n3 =0;
		n4 =0;
		n5 =0;
	scanf("%d", &qtdP);
	
	i = 0;
	while(i < qtdP){
		
		scanf("%d%d", &nped,&qtdC);
		
		switch(nped){
			
			case 1001: 
				n1 = n1 + qtdC * 1.5;
				break;
			case 1002:
				n2 = n2 + qtdC * 2.50;
				break;
			case 1003:
				n3 = n3 + qtdC * 3.50;
				break;
			case 1004:
				n4 = n4 + qtdC * 4.50;
				break;
			case 1005:
				n5 = n5 + qtdC * 5.50;
				break;
		}
		i ++;
	}
	
	printf("%.2f\n", n1+n2+n3+n4+n5);
	
	
	return 0;
}
