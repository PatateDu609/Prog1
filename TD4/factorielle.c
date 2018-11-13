#include <stdio.h>
#include <limits.h>

int facto(int i) {
    if(i == 0) return 1;
    if(facto(i - 1) < INT_MAX) return i * facto(i - 1);
    else return -1;
}

int main() {
    int n;
    printf("n ? ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Erreur : nombre positif non nul requis");
        return -1;
    }

    for(int i = 0; i < n; i++) {
        printf("%d! = %d\n", i, facto(i));
    }

    return 0;
}
