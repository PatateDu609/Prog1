#include <stdio.h>

int rfactorielle(int n) {
	if(n == 0) return 1;
	return n * rfactorielle(n - 1);
}

int ifactorielle(int n) {
	int p = 1;
	for(int i = 2; i <= n; i++) p *= i;
	return p;
}

int main() {
	printf("Methode iterative :\n");
	for(int i = 0; i < 13; i++) printf("%d\n", ifactorielle(i));
	printf("\nMethode recursive :\n");
	for(int i = 0; i < 13; i++) printf("%d\n", rfactorielle(i));
	return(0);
}
