#include <stdio.h>

int main() {
    int N, a, s = 0;

    printf("N ? ");
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        printf("entier : ");
        scanf("%d", &a);
        s += a;
    }
    printf("Somme : %d\n", s);
    return(0);
}
