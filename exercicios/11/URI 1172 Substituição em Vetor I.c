#include<stdio.h>

int main(){
	int X[10];
	int ind;
	
	for(ind=0; ind<10; ind++){
		scanf("%d", &X[ind]);
		
		if(X[ind] <= 0){
			X[ind] = 1;
			printf("X[%d] = %d\n", ind, X[ind]);
		}
		else{
			printf("X[%d] = %d\n", ind, X[ind]);
		}
	}
	return 0;
}
