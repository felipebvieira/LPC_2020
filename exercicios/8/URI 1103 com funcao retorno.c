#include <stdio.h>
#include <math.h>

int calcqtdm(int hi, int mi, int hf, int mf){
	
	int mintotal;
	
	mintotal = (hf-hi)*60 + (mf-mi);
		
		if(mintotal < 0){
			mintotal += 24*60;
		}
	
	return mintotal;
}

int main () {
	
	int hi, mi, hf, mf, qtdm;
		
	while(4 == scanf("%d %d %d %d", &hi, &mi, &hf, &mf)){
		if(0 == (hi+mi+hf+mf))
		break;
		
		qtdm = calcqtdm(hi, mi, hf, mf);
		
		printf("%d\n", qtdm);
	}
	
	return 0;
}
