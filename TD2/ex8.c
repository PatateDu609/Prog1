#include <stdio.h>

int main() {
	float argent;
	printf("argent ? ");
	scanf("%f", &argent);
	
	int moyen[15] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int r = argent * 100, n;
	
	for(int i = 0; i < 15; i++) {
		n = r / moyen[i];
		if(n != 0) {
			if(moyen[i] < 100) printf("Pieces de %dc : %d\n", moyen[i], n);
			
			else printf("Billets de %d : %d\n", moyen[i] / 100, n);
		}
		r %= moyen[i];
	}
	
	return(0);
}
