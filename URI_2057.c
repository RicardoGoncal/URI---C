#include<stdio.h>


int main(){
	
	int s, t, f,aux;
	
	scanf("%d %d %d", &s,&t,&f );
	
	if(s + t + f == 24){
		printf("0");
	}
	if(s == 0){
		
		if(f < 0){
			aux = t + f;
			if(aux < 0){
				printf("%d\n", 24 + aux);
			}
			else{
				printf("%d\n", aux);
			}
		}
		else{
			printf("%d\n", t + f);
		}	
	}
	else if(s > 0){
		aux = s + t;
		if(aux > 24){
			printf("%d\n", (aux - 24) + f);
		}
		else{
			printf("%d\n", aux + f);
		}
	}
	

	return 0;
}
