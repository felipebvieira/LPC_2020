#include <stdio.h>
#include <math.h>

int main(){
	int i, pulo, qdecanos, altura, alturaAnterior;
	
	scanf("%d %d", &pulo, &qdecanos);
	
	scanf("%d", &alturaAnterior);
	
	for(i=1; i<qdecanos; i++){
		scanf("%d", &altura);
		
		if(abs(altura-alturaAnterior) > pulo){ //abs: significa que todo resultado será positivo -10 se torna 10
			printf("GAME OVER\n");
			return 0;
		}
		
		alturaAnterior = altura;
	}
	
	printf("YOU WIN\n");
	
	return 0;
}
