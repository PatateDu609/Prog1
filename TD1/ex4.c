#include <stdio.h>

int main() {
	int m,n;
	printf("m ? ");
	scanf("%d", &m);
	printf("m = %d\n", m);
	printf("n ? ");
	scanf("%d", &n);
	printf("n = %d\n", n);
	
	printf("somme = %d, ", m + n);
	printf("difference = %d, ", m - n);
	printf("produit = %d, ", m * n);
	printf("quotient = %d\n", m / n);
	return(0);
}
