#include<stdio.h>

int main(){
	int par[5];
	int impar[5];
	int indpar=0, indimpar=0, cont, i;
	int n;
	
	for(cont=0; cont<15; cont++){
		scanf("%d", &n);
		
		if((n % 2) == 0){
			par[indpar] = n;
			indpar++;
			if(indpar == 5){
				for(i = 0; i < 5; i++){
					printf("par[%d] = %d\n", i, par[i]);
				}
				indpar = 0;
			}
		}
		else{
			impar[indimpar] = n;
			indimpar++;
			if(indimpar == 5){
				for(i = 0; i < 5; i++){
					printf("impar[%d] = %d\n", i, impar[i]);
				}
				indimpar = 0;
			}
		}
	}
	
	for(i=0; i<indimpar; i++){
		printf("impar[%d] = %d\n", i, impar[i]);
	}
		
	for(i=0; i<indpar; i++){
		printf("par[%d] = %d\n", i, par[i]);
	}
	
	return 0;
}
