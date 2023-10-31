#include <stdio.h>
 
int main() {
 
    float n1=0, n2=0, x=0, media;
    int y=0;
    
    while(y != 2){
    	scanf("%f", &x);
        if(x<0 || x>10){
            printf("nota invalida\n");
        }
        else{
            if(y == 0){
                n1 = x;
                y++;
            }
            else{
                n2 = x;
                y++;
            }
        }
    }
    
    media = (n1+n2)/2;
    
    printf("media = %.2f\n", media);
 
    return 0;
}
