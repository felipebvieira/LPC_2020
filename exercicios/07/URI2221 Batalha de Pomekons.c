#include <stdio.h>

typedef struct {
	int Ai, Di, Li;
	float golpe;
} Pokemon;

int main () {
	
	int inst, bonus;
	int i;
	
	Pokemon dabr, guar;
	
	scanf("%d", &inst);

	for (i=0; i<inst; i++) {
		scanf("%d", &bonus);
		
		scanf("%d %d %d", &dabr.Ai, &dabr.Di, &dabr.Li);
		dabr.golpe = ((dabr.Ai + dabr.Di) / 2);
		if (dabr.Li % 2 == 0)
			dabr.golpe += bonus;
			
		scanf("%d %d %d", &guar.Ai, &guar.Di, &guar.Li);
		guar.golpe = ((guar.Ai + guar.Di) / 2);
		if (guar.Li % 2 == 0)
			guar.golpe += bonus;
			
		if (dabr.golpe == guar.golpe)
			printf("Empate\n");
		else if (dabr.golpe > guar.golpe)
			printf("Dabriel\n");
		else
			printf("Guarte\n");
	}
	
	return 0;
}
