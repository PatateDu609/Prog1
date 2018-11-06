#include <stdio.h>

int main() {
	int n;
	printf("n ? ");
	scanf("%d", &n);
	if(n % 2  == 0) printf("n est pair");
	else printf("n est impair"); 
	printf("\n");
	return(0);
}
