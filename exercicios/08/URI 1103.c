#include <stdio.h>
#include <math.h>

int main () {
	
	int hi, mi, hf, mf, qtdm;
		
	while(4 == scanf("%d %d %d %d", &hi, &mi, &hf, &mf)){
		if(0 == (hi+mi+hf+mf))
		break;
		
		qtdm = (hf-hi)*60 + (mf-mi);
		
		if(qtdm < 0){
			qtdm += 24*60;
		}
		
		printf("%d\n", qtdm);
	}
	return 0;
}
