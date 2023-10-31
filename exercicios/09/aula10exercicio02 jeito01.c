#include <stdio.h>

void calcDivisao(int n1, int n2, float *quociente, int *resto){
	
	*quociente = (float)n1 / n2; //casting: aqui eu estou convertendo o resultado por exemplo o resutlado aqui esta saindo inteiro mas se o resultado for inteiro ele dará errado no caso de 2/4 o resultado correto será 0,5 sem o casting o resultado será 0 e colocando o casting (float) vc converte de int para float dando o resultado correto
	
	*resto = n1 % n2; // o resto é sempre um numero inteiro, por isso sempre declare ele como int
	
}

int main(){
	int n1, n2, resto;
	float quociente;
	
	printf("Digite o divisor: ");
	scanf("%d", &n1);
	
	printf("Digite o dividendo: ");
	scanf("%d", &n2);
	
	calcDivisao(n1, n2, &quociente, &resto);
	
	printf("O valor do Quociente eh: %.2f\n", quociente);
	
	printf("O valor do Resto eh: %d\n", resto);
	
	return 0;
}
