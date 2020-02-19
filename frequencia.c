#include<stdio.h>

int main(){
	
	// D = dias letivos
	//R = dias restantes
	//F = qto frequentou
	
	int D,F,R,result;
	
	scanf("%d%d%d", &D,&F,&R);
	
	if(F+R < D*0.75){
		printf("sem chance\n");
	}
	else if( D*0.75 <= F + R && F+R <= D*0.77){
		printf("soh um milagre\n");
	}
	else {
		result = R - ((D -(0.25*D) - F));
		printf("tranquilo pode faltar %d dia(s)\n", result);
	}
	return 0;
}
