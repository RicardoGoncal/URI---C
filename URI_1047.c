#include <stdio.h>
 
int main() {
 
 int h_ini,min_ini,h_fim,min_fim,horas,mins;
 
scanf("%d%d%d%d",&h_ini,&min_ini,&h_fim,&min_fim);

if ( h_fim > h_ini && min_fim > min_ini){
	
	horas = h_fim - h_ini;
	mins = min_fim - min_ini;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, mins);
}
else if (h_fim == h_ini && min_fim == min_ini){
	
	horas = (h_ini - h_fim)+24; 
	mins = min_fim - min_ini;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, mins);
}
else if(h_fim == h_ini && min_ini > min_fim){
	
	horas = (((h_fim-1) + 24) - h_ini);
	mins = (60 + min_fim)-(min_ini);
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, mins);
}
else if(h_ini == h_fim && min_ini < min_fim){
	
	horas = h_fim - h_ini;
	mins = min_fim - min_ini;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, mins);
}
else if(h_ini < h_fim && min_ini == min_fim){
	
	horas = h_fim - h_ini;
	mins = min_fim - min_ini;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, mins);
}
else if(h_ini > h_fim && min_ini == min_fim){
	
	horas = ((24 + h_fim)-h_ini);
	mins = min_fim - min_ini;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, mins);
}
else if(h_ini > h_fim && min_ini > min_fim){
	
	horas = (((h_fim-1) + 24) - h_ini);
	mins = (60 + min_fim)-(min_ini);
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, mins);
}
else if(h_ini < h_fim && min_ini > min_fim){
	
	horas = ((h_fim-1)-h_ini);
	mins = ((60+min_fim)-min_ini);
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, mins);
}
else if(h_ini > h_fim && min_ini < min_fim){
	
	horas = ((24+h_fim)-h_ini);
	mins = min_fim - min_ini;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, mins);
}
    return 0;
}


	
	
	
	
