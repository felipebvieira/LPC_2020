#include <stdio.h>
#include <math.h>

float calcDist(float x1, float y1, float x2, float y2){
	
	float dist, a, b;
	
	a = x2 - x1;
	b = y2 - y1;
	
	dist = sqrt(pow(a, 2) + pow(b, 2));

	return dist;
}


int main(){
	
	float x1, x2, y1, y2, distancia;
	
	printf("Informe x e y do primeiro ponto: ");
	scanf("%f %f", &x1, &y1);
	
	printf("Informe x e y do segundo ponto: ");
	scanf("%f %f", &x2, &y2);
	
	distancia = calcDist(x1, y1, x2, y2);
	
	printf("Distancia calculada: %.2f", distancia);
	
	return 0;	
}



