#include <stdio.h>
 
int main() {
 
    float x, soma=0, divi=0;
	float total;
    
    while(scanf("%f", &x) && x>0){
        soma = soma + x;
        divi = divi + 1;
    }
    total = soma/divi;
    
    printf("%.2f\n", total);
 
    return 0;
}
