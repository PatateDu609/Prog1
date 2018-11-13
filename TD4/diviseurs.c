#include <stdio.h>

int main() {
    int n;
    printf("n ? ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Erreur : nombre positif non nul requis");
        return -1;
    }
    printf("Diviseurs : \n");
    for(int i = 1; i <= n; i++) {
        int d = n % i;
        if(!d) printf("- %d\n", i);
    }

    return 0;
}
