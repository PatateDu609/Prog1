#include <stdio.h>

int main() {
	int n;
	do {
		printf("n (>0) ? ");
		scanf("%d", &n);
	} while(n <= 0);
	
	for(int i = 0, j = n; i <= n; i++, j--) {
		for(int k = j; k >= 0; k--) printf(" ");
		printf("*");
		for(int k = 0; k <= 2 * i; k++) printf(" ");
		printf("*\n");
	}
	
	for(int i = 0, j = n; i <= n; i++, j--) {
		for(int k = 0; k <= i; k++) printf(" ");
		printf("*");
		for(int k = 2 * j; k >= 0; k--) printf(" ");
		printf("*\n");
	}
	return(0);
}
