#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char frase[50], fraseMai[50], fraseMin[50];
	int tamanho, i;
	
	gets(frase);
	
	tamanho = strlen(frase);
	
	for(i=0; i<=tamanho; i++){
		fraseMai[i] = toupper(frase[i]);
		fraseMin[i] = tolower(frase[i]);
	}
	
	printf("%s\n", fraseMai);
	printf("%s\n", fraseMin);
	printf("%s\n", frase);
	
	return 0;
}
