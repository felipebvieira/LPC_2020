#include <stdio.h>

int main(){
	int L, R, D, cont, n;
	
	printf("Quantos vezes deseja realizar o teste?\n");
	scanf("%d", &n);
	
	for (cont=1; cont<=n; cont++){
		printf("Entre o valor de L de lancador\n");
		scanf("%d", &L);
		
		printf("Entre o valor de R de atacante\n");
		scanf("%d", &R);
		
		printf("Entre o valor de D de defensor\n");
		scanf("%d", &D);
		
		if(R > 50 && L < R && R > D){
			printf("S\n");
		}
		else{
			printf("N\n");
		}
	}
	
	return 0;
}
