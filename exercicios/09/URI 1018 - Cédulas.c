#include <stdio.h>

int quantnotas(int total, int val){
	int notas;
	notas = total/val;
	printf("%d nota(s) de R$ %d,00\n", notas, val);
	total = total%val;
	return total;
}

int main(){
	
	int cem=100 ,cin=50,vin=20,dez=10,cic=5,doi=2,um=1, total, quant;
	scanf("%d", &total);
	printf("%d\n", total);
	total = quantnotas(total, cem);
	total = quantnotas(total, cin);
	total = quantnotas(total, vin);
	total = quantnotas(total, dez);
	total = quantnotas(total, cic);
	total = quantnotas(total, doi);
	total = quantnotas(total, um);
	
	return 0;
}
