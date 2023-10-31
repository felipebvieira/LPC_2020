#include <stdio.h>

int main(){
	int cont;
	
	for (cont=1; cont <=100; cont++){
		
		if(cont%3==0 && cont%5==0){
			printf("Ding Ping\n");
		}
		else {
			if(cont%3==0){
				printf("Ding\n");
			}
			else {
				if (cont%5==0){
					printf("Ping\n");
				}
				else{
					printf("%d\n", cont);
				}
			}
		}
	}
	
	printf("Ding Ping Lee\n");
	
	return 0;
}
