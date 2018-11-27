#include <stdio.h>

int main() {
	int n;
	do {
		printf("n (>0) ? ");
		scanf("%d", &n);
	} while(n <= 0);
	++n;
	for(int i = 0, j = n - 2; i < n; i++, j--) {
		if(i == 0) {
			for(int k = j; k >= 0; k--) printf(" ");
			printf("*");
		}
		else {
			for(int k = j; k >= 0; k--) printf(" ");
			printf("*");
			for(int k = 2; k <= 2 * i; k++) printf(" ");
			printf("*");
		}
		printf("\n");
	}

	for(int i = 1, j = n - 2; i < n; i++, j--) {
		if(i == n - 1) {
			for(int k = n - 2; k >= 0; k--) printf(" ");
			printf("*");
		}
		else {
			for(int k = 1; k <= i; k++) printf(" ");
			printf("*");
			for(int k = 2 * j - 2; k >= 0; k--) printf(" ");
			printf("*");
		}
		printf("\n");
	}
	return(0);
}
