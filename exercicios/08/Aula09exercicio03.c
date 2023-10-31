#include <stdio.h>
#include <math.h>

#define PI 3.1416

float volumeEsfera(float raio){
	float volume;

	volume = (4 * PI * pow(raio, 3))/3;
	
	return volume;

}

int main(){
	float r, vol;
		
	printf("Informe o raio da esfera: ");
	scanf("%f", &r);
	
	vol = volumeEsfera(r);
	printf("volume: %.2f\n", vol);
	
	return 0;
	
}
