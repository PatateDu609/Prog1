#include <stdio.h>

int main() {
    int c = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 32; j++) {
            ++c;
            printf("%c ", c);
        }
        printf("\n");
    }

    return 0;
}
