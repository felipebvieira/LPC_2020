#include <stdio.h>

int main(){
	
	int a1, a2, a3, t1, t2, t3, menor;
	
	scanf("%d %d %d", &a1, &a2, &a3);
	
	t1 = a1*0 + a2*2 + a3*4;
	t2 = a1*2 + a2*0 + a3*2;
	t3 = a1*4 + a2*2 + a3*0;
	
	if(t1 <= t2 && t1 <= t3){
		menor = t1;
	}
	else{
		if(t2 <= t1 && t2 <= t3){ //tem que ser <= para caso o resultado de algum dos tempos seja igual, por exemplo se t1 e t2 forem iguais mas a comparaçõ tiver somente < ele ira pular os dois e ir para o t3 que é o errado posi o tempo dele é maior do que t1 e t2
			menor = t2;
		}
		else{
			menor = t3;
		}
	}
	
	printf("%d\n", menor);
	
	return 0;
}
