#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(0));
	int t, n, r;
	char retry;
	
	do {
		do {
			printf("Un entier t > 0 : ");
			scanf("%d", &t);
		} while(t <= 0);
		
		n = rand() % (t + 1);
		
		do {
			do {
				printf("Entrez un nombre entre 0 et %d : ", t);
				scanf("%d", &r);
			} while(r < 0 && r > t);
			
			if(r < n) printf("Plus\n");
			else if (r > n) printf("Moins\n");
		} while(n != r);
		printf("Bravo\n");
		
		do {
			printf("Refaire ? (o/n)");
			scanf("%*c%c", &retry);
		} while(retry != 'o' && retry != 'O' && retry != 'n' && retry != 'N');
	} while(retry == 'O' || retry == 'o');
	
	return(0);
}
