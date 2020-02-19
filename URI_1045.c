#include<stdio.h>
#include<math.h>


int main(){
	
	double A,B,C,n1,n2,n3   ;
	
	scanf("%lf%lf%lf", &n1,&n2,&n3);
	
	if ( n1 >= n2 && n1 >= n3){
		
		A = n1;
		B = n2;
		C = n3;
		
		if ( A >= B + C ){
			printf("NAO FORMA TRIANGULO\n");
		}
		else if ( pow(A,2) == pow(B,2)+pow(C,2) ){
			printf("TRIANGULO RETANGULO\n");
		}
		else if(pow(A,2) > pow(B,2)+pow(C,2)){
			printf("TRIANGULO OBTUSANGULO\n");
			if ( A == B && B == C && A == C){
				printf("TRIANGULO EQUILATERO\n");
			}
			else if ( A == B || B == C || A == C){
				printf("TRIANGULO ISOSCELES\n");
			}
		}
		else if(pow(A,2) < pow(B,2)+pow(C,2)){
			printf("TRIANGULO ACUTANGULO\n");
			if ( A == B && B == C && A == C){
				printf("TRIANGULO EQUILATERO\n");
			}
			else if ( A == B || B == C || A == C){
				printf("TRIANGULO ISOSCELES\n");
			}
		}	
	}
	else if ( n2 >= n1 && n2 >= n3){
		
		A = n2;
		B = n1;
		C = n3;
		
		if ( A >= B + C ){
			printf("NAO FORMA TRIANGULO\n");
		}
		else if ( pow(A,2) == pow(B,2)+pow(C,2) ){
			printf("TRIANGULO RETANGULO\n");
		}	
		else if(pow(A,2) > pow(B,2)+pow(C,2)){
			printf("TRIANGULO OBTUSANGULO\n");
			if ( A == B && B == C && A == C){
				printf("TRIANGULO EQUILATERO\n");
			}
			else if ( A == B || B == C || A == C){
				printf("TRIANGULO ISOSCELES\n");
			}
		}
		else if(pow(A,2) < pow(B,2)+pow(C,2)){
			printf("TRIANGULO ACUTANGULO\n");
			if ( A == B && B == C && A == C){
				printf("TRIANGULO EQUILATERO\n");
			}
			else if ( A == B || B == C || A == C){
				printf("TRIANGULO ISOSCELES\n");
			}
		}	
	}
	else{
		
		A = n3;
		B = n1;
		C = n2;
		
		if ( A >= B + C ){
			printf("NAO FORMA TRIANGULO\n");
		}
		else if ( pow(A,2) == pow(B,2)+pow(C,2) ){
			printf("TRIANGULO RETANGULO\n");
		}
		else if(pow(A,2) > pow(B,2)+pow(C,2)){
			printf("TRIANGULO OBTUSANGULO\n");
			if ( A == B && B == C && A == C){
				printf("TRIANGULO EQUILATERO\n");
			}
			else if ( A == B || B == C || A == C){
				printf("TRIANGULO ISOSCELES\n");
			}
		}
		else if(pow(A,2) < pow(B,2)+pow(C,2)){
			printf("TRIANGULO ACUTANGULO\n");
			if (  A == B && B == C && A == C){
				printf("TRIANGULO EQUILATERO\n");
			}
			else if ( A == B || B == C || A == C){
				printf("TRIANGULO ISOSCELES\n");
			}
		}		
	}
	return 0;
}
