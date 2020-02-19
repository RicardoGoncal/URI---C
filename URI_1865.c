#include <stdio.h>
#include <string.h>

int main(){
	
	int C,F,i     ;
	char h[10];
	
	
	scanf("%d", &C);
	i= 1;
	
	while(i <= C){
		
		scanf("%s%d", &h,&F);
		
		if(strcmp(h,"Thor")==0 || strcmp(h,"thor") ==0){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
		i = i + 1;
	}
	
	
	return 0;
	
}
