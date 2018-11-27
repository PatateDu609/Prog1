#include <stdio.h>

int addition(int a, int b) {
	return a + b;
}

int soustraction(int a, int b) {
	return addition(a, -b);
}

int multiplication(int a, int b) {
	return a * b;
}

float division(int a, int b) {
	if(b == 0) return .3f;
	else return a / b;
}

int main() {
	char command;
	int a, b;
	do {
		printf("Addition (A), Soustraction (S), Multiplication (M), Division (D), Quitter (Q) \n");
		printf("Commande (entre parenthèses) : ");
		scanf("%c%*c", &command);

		switch(command) {
		case 'A': case 'S': case 'M':
			printf("a ? ");
			scanf("%d", &a);
			printf("b ? ");
			scanf("%d", &b);
			printf("Resultat : ");
			break;
		 case 'D' :
			 printf("a ? ");
			 scanf("%d", &a);
			 printf("b ? ");
			 scanf("%d", &b);
			 break;
		}

		scanf("%*c");

		float rd;
		switch(command) {
		case 'A':
			printf("%d", addition(a, b));
			break;
		case 'D':
			rd = division(a, b);
			break;
		case 'S':
			printf("%d", soustraction(a, b));
			break;
		case 'M':
			printf("%d", multiplication(a, b));
			break;
		}

		if(command == 'D')
			if(rd == .3f) printf("Pas de division par 0");
			else printf("Resultat : %d", (int)rd);

		printf("\n");
	} while(command != 'Q');
	return(0);
}
