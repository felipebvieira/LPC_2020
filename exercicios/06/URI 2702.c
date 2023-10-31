#include <stdio.h>
int main() {
	
	int frangoDisp,bifeDisp, massaDisp;
	int frangoRequ,bifeRequ, massaRequ;
	int refeicaoFaltante=0;	
	
	scanf("%d %d %d", &frangoDisp, &bifeDisp,&massaDisp);
	scanf("%d %d %d", &frangoRequ, &bifeRequ,&massaRequ);
	
	if(frangoRequ > frangoDisp)
		refeicaoFaltante += frangoRequ - frangoDisp;
	
	if(bifeRequ > bifeDisp)
		refeicaoFaltante += bifeRequ - bifeDisp;
	
	if(massaRequ > massaDisp)
		refeicaoFaltante += massaRequ - massaDisp;
	
	printf("%d\n", refeicaoFaltante);
	
	return 0;
}
