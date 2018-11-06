#include <stdio.h>

int main() {
	char  o = 'z';
	float a, b;
	printf("a ? ");
	scanf("%f%*c", &a);
	printf("o (+ - * /) ? ");
	scanf("%c%*c", &o);
	printf("b ? ");
	scanf("%f", &b);
	
	if(b == 0 && o == '/') {
		printf("Division par 0 impossible. \n");
		return(0);
	}
	switch(o) {
		case '+':
			printf("%.2f + %.2f = %.2f", a, b, a + b);
		break;
		case '-':
			printf("%.2f - %.2f = %.2f", a, b, a - b);
		break;
		case '/':
			printf("%.2f / %.2f = %.2f", a, b, a / b);
		break;
		case '*':
			printf("%.2f * %.2f = %.2f", a, b, a * b);
		break;
	}
	printf("\n");
	return(0);
}
