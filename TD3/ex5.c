#include <stdio.h>

int main() {
	int a, b, c;
	printf("a ? ");
	scanf("%d", &a);
	printf("b ? ");
	scanf("%d", &b);
	printf("c ? ");
	scanf("%d", &c);

	int temp = a;
	if(a < b && a < c) {
		temp = c;
		c = a;
		if(b < c) a = temp;
		else {
			a = b;
			b = temp;
		}
	}
	else if(b < a && a < c) {
		a = c;
		c = b;
		b = temp;
	}
	else if(c < a && a < b) {
		a = b;
		b = temp;
	}
	else {
		temp = b;
		if(b < c) {
			b = c;
			c = temp;
		}
	}

	printf("\n\ngrand = %d\nmoyen = %d\npetit = %d \n", a, b, c);
	return(0);
}
