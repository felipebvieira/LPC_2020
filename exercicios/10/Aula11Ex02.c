#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
		
    char frase[30];
    int cont = 0, i;	
	
    gets(frase);
		
    for(i = 0; i < strlen(frase); i++){
		
        frase[i] = toupper(frase[i]);
		
        if(frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
//      if(frase[i] == 65  || frase[i] == 69  || frase[i] == 73  || frase[i] == 79  || frase[i] == 85){   // usa o valor ASCII do caractere
	
            cont ++;
        }
    }
	
    printf("Total de vogais: %d\n", cont);

    return 0;
}

