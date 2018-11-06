#include <stdio.h>

int main() {
	float l, L;
	printf("Largeur ? ");
	scanf("%f", &l);
	printf("Longeur ? ");
	scanf("%f", &L);
	printf("Perimetre = %.2f\n", 2*(l + L));
	printf("Surface = %.2f\n", L * l);
	
	return(0);
}
