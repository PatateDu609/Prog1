#include <stdio.h>

int main() {
	char c, d;
	printf("caractere 1 ? ");
	scanf("%c%*c", &c);
	printf("caractere 1 = %c (code ascii=%d)\n", c, c);
	printf("caractere 2 ? ");
	scanf("%c%*c", &d);
	printf("caractere 2 = %c (code ascii=%d)\n", d, d);
	return(0);
}
