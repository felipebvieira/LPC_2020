#include <stdio.h>
#include <math.h>

typedef struct _d {
	float x, y;
} Distancia;

float distanciaxy(Distancia p1, Distancia p2){
	
	float res;
	//float a, b;
	
	//a = p2.x - p1.x;
	//b = p2.y - p1.y;
	
	//res = pow(a, 2) + pow(b, 2);
	
	//res = sqrt(res);
	
	res = sqrt(pow(p2.x - p1.x, 2) + (pow(p2.y - p1.y, 2)));
	
	return(res);
}

int main(){
	
	float resultado;
	Distancia p1, p2;
	
	printf("Digite os valores de x1 e y1: \n");
	scanf("%f %f", &p1.x, &p1.y);
	
	printf("Digite os valores de x2 e y2: \n");
	scanf("%f %f", &p2.x, &p2.y);
	
	resultado = distanciaxy(p1, p2);
	
	printf("A distancia entre os dois pontos eh de: %.2f", resultado);
	
	return 0;
}
