#include <stdio.h>
 
int main() {
 
    int N, cont, quad, cubo;
    
    scanf("%d", &N);
    
    for (cont=1; cont<=N; cont++){
        
        quad = pow(cont, 2);
        cubo = pow(cont, 3);
        
        printf("%d %d %d\n", cont, quad, cubo);
        
    }
 
    return 0;
}
