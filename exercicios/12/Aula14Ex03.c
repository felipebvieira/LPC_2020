#include<stdio.h>

int main(){
	float mat[5][10];
	int lin, col, colmenor;
	float menor;
	
	for(lin=0; lin<5; lin++){
		for(col=0; col<10; col++){
			printf("Elemento[%d][%d] da matriz: ", lin, col);
			scanf("%f", &mat[lin][col]);
		}
	}
	
	menor = mat[0][0];
	
	for(lin=0; lin<5; lin++){
		for(col=0; col<10; col++){
			if(mat[lin][col] < menor){
				menor = mat[lin][col];
				colmenor = col;
			}
		}
	}
	
	printf("\n\nColuna [%d] possui o menor valor\n", colmenor);
	for(lin=0; lin<5; lin++){
		printf("linha[%d] %.2f\n", lin, mat[lin][colmenor]);
	}
	
	return 0;
}
