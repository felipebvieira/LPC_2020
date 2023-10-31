#include <stdio.h>

int main(){
	
	int a1, a2, a3, t1, t2, t3, menor;
	
	scanf("%d %d %d", &a1, &a2, &a3);
	
	t1 = a1*0 + a2*2 + a3*4;
	t2 = a1*2 + a2*0 + a3*2;
	t3 = a1*4 + a2*2 + a3*0;
	
	if(t1 < t2){
		menor = t1;
	}
	else{
		menor = t2;
	}
	
	if(menor>t3){
		menor = t3;
	}
	
	printf("%d\n", menor);
	
	return 0;
}
