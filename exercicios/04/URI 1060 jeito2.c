#include <stdio.h>
 
int main() {
 
    float n;
    int cont, t;
    
    t = 0;
    
    for(cont=1; cont<=6; cont++){
        scanf("%f", &n);
        
        if(n > 0){
            t++;
        }
    }
    
    printf("%d valores positivos\n", t);
 
    return 0;
}
