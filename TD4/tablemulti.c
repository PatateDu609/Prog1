#include <stdio.h>

int main() {
    int n;
    printf("n ? ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Erreur : nombre positif non nul requis");
        return -1;
    }

    for(int i = 0; i <= 10; i++) {
        printf("%d * %d = %d\n", i, n, i * n);
    }

    return 0;
}
