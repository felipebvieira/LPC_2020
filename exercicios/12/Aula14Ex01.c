#include <stdio.h>

int main(){
	int matA[4][3], matB[4][3], matC[4][3];
	int indlin, indcol;
	
	/* fazer a entrada de dados de A*/
	for(indlin=0; indlin<4; indlin++){
		for(indcol=0; indcol<3; indcol++){
			printf("Elemento[%d][%d] da matriz A: ", indlin+1, indcol+1); //esse +1 tem no video da aula explicando mas � para q apare�a para o usuario mat[1][1] em vez de mat[0][0].
			scanf("%d", &matA[indlin][indcol]);	

		}	
	}
	
	/* fazer a entrada de B e o c�lculo de C */
	for(indlin=0; indlin<4; indlin++){
		for(indcol=0; indcol<3; indcol++){	
			printf("Elemento[%d][%d] da matriz B: ", indlin+1, indcol+1);
			scanf("%d", &matB[indlin][indcol]);	
			
			matC[indlin][indcol] = matA[indlin][indcol] + matB[indlin][indcol];		
		}
	}
	
	/* apresenta��o das matrizes */
	
	printf("\n\nMatriz A\n");
	for(indlin=0; indlin<4; indlin++){
		for(indcol=0; indcol<3; indcol++){	
			printf("%d\t", matA[indlin][indcol]);	
		}
		printf("\n");
	}
	
	printf("\n\nMatriz B\n");
	for(indlin=0; indlin<4; indlin++){
		for(indcol=0; indcol<3; indcol++){	
			printf("%d\t", matB[indlin][indcol]);	
		}
		printf("\n");
	}
	
	printf("\n\nMatriz C\n");
	for(indlin=0; indlin<4; indlin++){
		for(indcol=0; indcol<3; indcol++){	
			printf("%d\t", matC[indlin][indcol]);	
		}
		printf("\n");
	}
	
	return 0;
	
	
}
