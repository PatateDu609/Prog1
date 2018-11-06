#include <stdio.h>

int main() {
	float km, cste = 0.3;
	printf("nombre de kilometres ? ");
	scanf("%f", &km);
	printf("nombre de kilometres = %.0f\n", km);
	printf("prix du billet sans ristourne = %.2f\n", cste * km);
	printf("prix du billet avec ristourne = %.2f\n", cste * km * 0.85);
	return(0);
}
