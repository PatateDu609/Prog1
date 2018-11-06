#include <stdio.h>
#include <math.h>

int main() {
	float r;
	printf("Rayon ? ");
	scanf("%f", &r);
	printf("aire du cercle = %.2f\n", M_PI * r * r);
	printf("volume de la sphere = %.2f\n", M_PI * r*r*r * 4/3);
	return(0);
}
