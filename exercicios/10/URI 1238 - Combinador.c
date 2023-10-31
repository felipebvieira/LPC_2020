#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char A[50], B[50];
	int tamA, tamB, i;
	int qtd, cont=0;
	
	scanf("%d", &qtd);
	
	while(qtd != cont){
		scanf("%s %s", A, B);
		
		tamA = strlen(A);
		tamB = strlen(B);
		
		if(tamA > tamB){
			for(i=0; i<tamB; i++){
			printf("%c%c", A[i], B[i]);
			}
			for(i=tamB; i<tamA; i++){
			printf("%c", A[i]);
			}
			printf("\n");
		}
		else{
			for(i=0; i<tamA; i++){
			printf("%c%c", A[i], B[i]);
			}
			for(i=tamA; i<tamB; i++){
			printf("%c", B[i]);
			}
			printf("\n");
		}
		cont++;	
	}
	
	return 0;
}
