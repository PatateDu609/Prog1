#include <stdio.h>

int main() {
    int N, a, p = 0, n = 0;

    printf("N ? ");
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        printf("entier : ");
        scanf("%d", &a);
        if(a < 0) ++n;
        else if (a > 0) ++p;
    }
    printf("Positifs : %d\nNegatifs : %d\n", p, n);
    return(0);
}
