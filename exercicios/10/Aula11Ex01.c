#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char frase[50],a[50],b[50];
    int tamanho,i;
    
    gets(frase);
    
    tamanho = strlen(frase);
    
    for(i=0; i<= tamanho; i++){    	// observe que o �limo caractere a ser 
									// trabalhado � o "terminador" da string.
    	   a[i]=tolower(frase [i]);	// Dependendo do processamento, isso n�o deve ser feto, ent�o o 
    	   b[i]=toupper(frase [i]);	// loop vai somente at� "i<tamanho".
    	
    }
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", frase);

    return 0;
}
