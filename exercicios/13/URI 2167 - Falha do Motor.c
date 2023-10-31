#include<stdio.h>

int main(){
	int N;
	int R[10000];
	int i;
	int menor;
	int imenor=0;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &R[i]);
	}
	
	menor = R[0];
	
	for(i=0; i<N; i++){
		if(R[i] >= menor){
			menor = R[i];
			imenor = 0;
		}
		else{
			imenor = i+1;
			break;
		}
	}
	
	printf("%d\n", imenor);
	
	return 0;
}
