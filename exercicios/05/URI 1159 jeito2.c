#include <stdio.h>

int main() {
	int x, i, soma;
	
	while(scanf("%d", &x) && x != 0){ //Aqui ele ta falando que enquanto o x for diferente de 0 ele vai ficar executando o while
		soma=0;
		if(x%2 !=0){
			x++;
		}
		for(i=0; i<5; i++, x+=2){
			soma = soma + x;
		}
		printf("%d\n", soma);
	}
	return 0;
}
