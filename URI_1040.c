#include<stdio.h>
#include<math.h>

int main(){
	
	float nota1,nota2,nota3,nota4, media,n_exame,new_media;
	
	scanf("%f%f%f%f",&nota1,&nota2,&nota3,&nota4);
	
	media = ((nota1*2) + (nota2*3) + (nota3*4) + nota4)/ 10.0;
	printf("Media: %.1f\n",media);
	
	
	if(media >= 7.0){
		printf("Aluno aprovado.\n");
	}
	else if(media >= 5.0 && media <=6.9){
		printf("Aluno em exame.\n");
		scanf("%f",&n_exame);
		printf("Nota do exame: %.1f\n",n_exame);
		
		new_media = (media + n_exame)/2.0;
		
		if(new_media >= 5.0 ){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",new_media);
		}
		else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n",new_media);
		}	
	}
	else{
		printf("Aluno reprovado.\n");
	}
	
	
	return 0;
}
