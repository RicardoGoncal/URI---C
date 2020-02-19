#include<stdio.h>


int main(){
	
	int ele, n, i=0, m2=0,m3=0,m4=0,m5=0;
	
	scanf("%d", &n);
	
	while(i < n){
		scanf("%d", &ele);
		
			if(ele % 2 == 0){
			m2++;
		}
		if(ele % 3 == 0){
			m3++;
		}
		if(ele % 4 == 0){
			m4++;
		}
		if(ele % 5 == 0){
			m5++;
		}
		i++;
	}
	
	printf("%d Multiplo(s) de 2\n", m2);
	printf("%d Multiplo(s) de 3\n", m3);
	printf("%d Multiplo(s) de 4\n", m4);
	printf("%d Multiplo(s) de 5\n", m5);
	return 0;
}
	
