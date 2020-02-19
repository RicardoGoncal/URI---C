#include <stdio.h>

int main(){
	int cod1,npc1,cod2,npc2;
	float vlr1,vlr2;
	
	scanf("%d%d%f", &cod1,&npc1,&vlr1);
	scanf("%d%d%f", &cod2,&npc2,&vlr2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", (npc1*vlr1)+(npc2*vlr2));
	
	return 0;
	
}
