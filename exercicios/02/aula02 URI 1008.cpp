#include <stdio.h>
 
int main() {
 
   int n, h;
   float s, t;
   
   scanf("%d", &n);
   scanf("%d", &h);
   scanf("%f", &s);
   
   t = h * s;
   
   printf("NUMBER = %d\n", n);
   printf("SALARY = U$ %.2f\n", t);
 
    return 0;
}
