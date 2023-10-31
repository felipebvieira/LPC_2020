#include <stdio.h>
#include <math.h>

float distanciaDoisPontos(float x1, float y1, float x2, float y2){
	
	float result;
	
	result = sqrt(pow(x2 - x1, 2) + (pow(y2 - y1, 2)));
	
	return(result);
}

int main(){
	
	float x1, y1, x2, y2, resultado;
	
	printf("Digite os valores de x1 e y1: \n");
	scanf("%f %f", &x1, &y1);
	
	printf("Digite os valores de x2 e y2: \n");
	scanf("%f %f", &x2, &y2);
	
	resultado = distanciaDoisPontos(x1, y1, x2, y2);
	
	printf("A distancia entre os dois pontos eh de: %.2f", resultado);
	
	return 0;
}
