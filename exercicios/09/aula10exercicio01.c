#include <stdio.h>

void calcPesoIdeal(char sexo, float alt, float *peso){
	
	if(sexo == 'M'){
		*peso = 72.7 * alt - 58;
	}
	else{
		*peso = 62.1 * alt - 44.7;
	}
}

int main(){
	float altura, pesoIdeal;
	char sexo;
	
	printf("Informe o sexo da pessoa (F/M): ");
	scanf("%c", &sexo);
	
	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	calcPesoIdeal(sexo, altura, &pesoIdeal);
	
	printf("Peso ideal calculado: %.1f\n", pesoIdeal);
	
	return 0;
}
