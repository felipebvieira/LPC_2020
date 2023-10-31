#include<stdio.h>

int main(){
	int   qdeAlunos, ra, raMaiornota;
	float nota, maiorNota=-1;
	
	scanf("%d", &qdeAlunos); 
	
//	for(i=0; i<qdeAlunos; i++){       // esse loop		ativar for ou while
	while(qdeAlunos--){               // ou esse       um dos 2, não pode ser os 2 ativados
		                                     
		scanf("%d %f", &ra, &nota);          
		
		if(nota > maiorNota){
			maiorNota   = nota;
			raMaiornota = ra;	
		}	
	}
	
	if(maiorNota < 8.0)
		printf("Minimum note not reached\n");
	else
		printf("%d\n", raMaiornota);
	
	return 0;
}
