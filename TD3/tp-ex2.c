#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, d;
	printf("Resous ax² + bx + c = 0\n");
	printf("a (non nul) ? ");
	scanf("%f", &a);
	printf("b ? ");
	scanf("%f", &b);
	printf("c ? ");
	scanf("%f", &c);
	
	if(a) {
		d = pow(b, 2) - 4 * a * c;
		if(d > 0) printf("x1 = %.2f, et x2 = %.2f\n", (-b + sqrt(d))/(2*a), (-b - sqrt(d))/(2*a));
		else if(!d) printf("x = %.2f\n", -b/(2*a));
		else printf("L'equation n'a pas de racines\n");
	}
	else {
		printf("Ce n'est pas une equation du second degre.");
	}
	return(0);
}
