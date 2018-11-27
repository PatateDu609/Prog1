#include <stdio.h>

#define T 5

int main() {
//	malloc(T * sizeof(int));
	char rep = 'o';
	int tempera[T];
	int * p = tempera;
	int i = 0;
	float s = 0;

	for(p = tempera; i < T && rep == 'o'; p++, i++) {
		printf("Temp : ");
		scanf("%d%*c", p);
		s += (float) *p;
		printf("Continuer ? ");
		scanf("%c", &rep);
	}

	printf("Moyenne : %.2f\n", s / i);

	return(0);
}
