#include<stdio.h>

int main(){
	float M[12][12];	 
	int indlin, indcol;
	int L; 				
	char T[5];				
	float soma=0;
	
	scanf("%d %c", &L, &T);
	
	for(indlin=0; indlin<12; indlin++){
		for(indcol=0; indcol<12; indcol++){
			scanf("%f", &M[indlin][indcol]);
		}
	}
	
	for(indcol=0; indcol<12; indcol++){
		soma += M[L][indcol];
	}
	
	if(T[0] == 'M'){
		soma = soma/12;
	}
	
	printf("%.1f\n", soma);
	
	return 0;
}
