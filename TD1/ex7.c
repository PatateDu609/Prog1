#include <stdio.h>

int main() {
	int m, n;
	printf("m ? ");
	scanf("%d", &m);
	printf("m = %d\n", m);
	printf("n ? ");
	scanf("%d", &n);
	printf("n = %d\n", n);
	printf("%d + %d = %d\n", m, n, m+n);
	printf("%d - %d = %d\n", m, n, m-n);
	return(0);
}
