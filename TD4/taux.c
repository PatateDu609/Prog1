#include <stdio.h>
#define T 0.3f
int main() {
     int somme, s0, n;
     printf("Somme ? ");
     scanf("%d", &somme);
     s0 = somme;
     while(somme < s0 * 2) {
         somme *= (1 + T);
         ++n;
     }
     printf("Double en %d annees.\n", n);
     return(0);
 }
