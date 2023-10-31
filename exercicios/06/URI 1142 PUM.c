#include <stdio.h>

int main(){
	int cont, N;
	
	scanf("%d", &N);
	
	N = N * 4;
	
	for (cont=1; cont <= N; cont++){
		
		if(cont % 4 == 0){
			printf("PUM\n");
		}
		else{
			printf("%d ", cont);
		}
	}
	
	return 0;
}
