#include<stdio.h>

int main(){
	float vetNotas[5], media=0;
	int ind;
	
	for(ind=0; ind<5; ind++){
		scanf("%f", &vetNotas[ind]);
		media += vetNotas[ind];
	}
	
	media = media / ind; //Esse ind � o contador que vai estar acumulado com o valor maximo do loop que no caso aqui � 5 se ele fosse um loop com 10 ele estaria acumulado com o valor 10 e dividiria por 10
	
	printf("Media calculada: %.1f\n", media);
	
	return 0;
}
