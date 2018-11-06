#include <stdio.h>

int main() {
	float m, n;
	printf("nombre d'etudiants inscrits ? ");
	scanf("%f", &m);
	printf("nombre d'etudiants inscrits = %.0f\n", m);
	printf("nombre d'etudiants presents ? ");
	scanf("%f", &n);
	printf("nombre d'etudiants presents = %.0f\n", m);
	
	float pourcentage;
	pourcentage = (n / m) * 100;
	printf("pourcentage de presence = %.1f\n", pourcentage);
	return(0);
}
