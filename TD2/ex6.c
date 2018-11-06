#include <stdio.h>

int main() {
	int a, b, c;
	printf("a ? ");
	scanf("%d", &a);
	printf("b ? ");
	scanf("%d", &b);
	
	printf("avant echange : a = %d et b = %d\n", a, b);
	
	c = a;
	a = b;
	b = c;
	
	printf("apres echange : a = %d et b = %d\n", a, b);
	return(0);
}
