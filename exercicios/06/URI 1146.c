#include <stdio.h>

int main(){
	int i, val;
	
	while (scanf("%d", &val) && val>0){
		
		for (i=1; i<val; i++)
			printf("%d ", i);
		
		printf("%d\n", val);
	}

    return 0;
}
