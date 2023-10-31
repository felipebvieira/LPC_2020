#include<stdio.h>

int main(){
	int il, ic;
	int A[4][3], B[4][3], C[4][3];
	
	
	for(il=0; il<4; il++){
		for(ic=0; ic<3; ic++){
			printf("Posicao[%d][%d] da matriz A: ", il+1, ic+1);
			scanf("%d", &A[il][ic]);
			printf("Posicao[%d][%d] da matriz B: ", il+1, ic+1);
			scanf("%d", &B[il][ic]);
			C[il][ic] = A[il][ic] + B[il][ic];
		}
	}

	printf("\n\nMatriz Posicao A\n");
	for(il=0; il<4; il++){
		for(ic=0; ic<3; ic++){
			printf("%d\t", A[il][ic]);
		}
		printf("\n");
	}
	
	printf("\n\nMatriz  PosicaoB\n");
	for(il=0; il<4; il++){
		for(ic=0; ic<3; ic++){
			printf("%d\t", B[il][ic]);
		}
		printf("\n");
	}
	
	printf("\n\nMatriz Posicao C\n");
	for(il=0; il<4; il++){
		for(ic=0; ic<3; ic++){
			printf("%d\t", C[il][ic]);
		}
		printf("\n");
	}

	return 0;
}
