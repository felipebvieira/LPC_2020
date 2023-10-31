#include<stdio.h>

int main(){
	float vetNotas[10], media=0;
	int ind;
	
	for(ind=0; ind<10; ind++){
		scanf("%f", &vetNotas[ind]);
		media += vetNotas[ind];
	}
	
	media = media / ind; 	
	printf("Media calculada: %.1f\n", media);
	
	for(ind=0; ind<10; ind++){
		if(vetNotas[ind] == media){
			printf("O indice %d eh igual a media\n", ind);
			printf("Seu valor eh: %.1f\n\n", vetNotas[ind]);
		}
		else{
			printf("O indice %d eh diferente da media\n", ind);
			printf("Seu valor eh: %.1f\n\n", vetNotas[ind]);
		}
	}
	
	return 0;
}
