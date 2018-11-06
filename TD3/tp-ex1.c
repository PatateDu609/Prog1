#include <stdio.h>

int main() {
	float a, b;
	printf("Resous ax + b = 0\n");
	printf("a ? (non nul) ");
	scanf("%f", &a);
	printf("b ? ");
	scanf("%f", &b);
	if(a) printf("r = %.2f\n", -b/a);
	else printf("a nul\n");
	return(0);
}
