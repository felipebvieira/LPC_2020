#include <stdio.h>
 
int main(){
 
    int A, B, C, D, SAB, SCD;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    
    SAB = A + B;
    SCD = C + D;
    
    if(B > C && D > A && SCD > SAB && C > 0 && D > 0 && A%2 == 0)
    printf("Valores aceitos\n");
    else
    printf("Valores nao aceitos\n");
 
    return 0;
}
