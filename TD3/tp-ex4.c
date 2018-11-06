#include <stdio.h>

int main() {
	int x, y;
	char dep;
	printf("x ? ");
	scanf("%d", &x);
	printf("y ? ");
	scanf("%d", &y);
	printf("deplacement ? ");
	scanf("%*c%c%*c", &dep);
	
	switch(dep) {
		case 'h': case 'H':
			printf("nouveau point : (%d, %d)\n", x, y + 1);
			break;
			
		case 'b': case 'B':
			printf("nouveau point : (%d, %d)\n", x, y - 1);
			break;
			
		case 'd': case 'D':
			printf("nouveau point : (%d, %d)\n", x + 1, y);
			break;
			
		case 'g': case 'G':
			printf("nouveau point : (%d, %d)\n", x - 1, y);
			break;
			
		default:
			printf("Deplacement invalide\n");
			break;
	}
	return(0);
}
