#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char frase[30];
	int cont=0, i, tam;
	
	gets(frase);
	
	tam = strlen(frase);
	
	for(i=0; i<tam; i++){
		frase[i] = tolower(frase[i]);
		
		if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' )
		cont++;
	}
	
	printf("Total de vogais: %d\n", cont);
	
	return 0;
}
