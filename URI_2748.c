#include <stdio.h>


int main(){
	
	int i;
	
	for(i=0; i < 40; i++){
		printf("-");
	}
	printf("\n|");
	
	for(i=0; i<40; i++){
		
		if(i >= 0 && i < 10){
			printf(" ");
		}
		if(i == 10){
		printf("Roberto");
		}
	}
	for(i=18; i < 39; i++){
		printf(" ");
	}
	printf("|");
	printf("\n|");
	
	for(i=0; i<38; i++){
		printf(" ");
	}
	printf("|");
}
