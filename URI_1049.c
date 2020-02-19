#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char vertinvert[15];
	char tipo[15];
	char classe[15];
	
	printf("Escreva se eh vertebrado ou invertebrado: ");
	scanf("%s", vertinvert);
	
	printf("\nEscreva o tipo(ave,mamifero,inseto,anelideo): ");
	scanf("%s", tipo);
	
	printf("\nEscreva a classe(carnivoro,herbivoro,onivoro,hematofago): \n\n");
	scanf("%s", classe);
	
	if(strcmp(vertinvert,"vertebrado")==0){
		if(strcmp(tipo,"ave") == 0){
			if(strcmp(classe,"carnivoro") == 0){
				printf("aguia");
			}
			else{
				printf("pomba");
			}
		}
		else{
			if(strcmp(classe,"onivoro")==0){
				printf("homem");
			}
			else{
				printf("vaca");
			}
		}
	}
	else{
		if(strcmp(tipo,"inseto")==0){
			if(strcmp(classe,"hematofago")==0){
				printf("pulga");
			}
			else{
				printf("lagarta");
			}
		}
		else{
			if(strcmp(classe,"onivoro") == 0){
				printf("minhoca");
			}
			else{
				printf("sanguessuga");
			}
		}
	}
	
	
	return 0;
}
