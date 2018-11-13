#include <stdio.h>

int main() {
    int n, s = 0;
    printf("n ? ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Erreur : nombre positif non nul requis");
        return -1;
    }
    for(int i = 1; i < n; i++) {
        int d = n % i;
        if(!d) s += i;
    }

    if(s == n) printf("Parfait !");
    else printf("Pas parfait !");
    printf("\n");

    return 0;
}
