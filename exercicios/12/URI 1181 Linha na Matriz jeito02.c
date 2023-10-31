#include<stdio.h>

int main(){
	float M[12][12];	 
	int indlin, indcol;
	int L; 				
	char T;				
	float soma=0;
	
	scanf("%d", &L);
	scanf("%s", &T);
	
	for(indlin=0; indlin<12; indlin++){
		for(indcol=0; indcol<12; indcol++){
			scanf("%f", &M[indlin][indcol]);
		}
	}
	
	for(indcol=0; indcol<12; indcol++){
		soma += M[L][indcol];
	}
	
	if(T == 'M'){
		soma = soma/12;
	}
	
	printf("%.1f\n", soma);
	
	return 0;
}
