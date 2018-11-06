#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int t, r, a = 0;
	char retry, entry;
	
	do {
		do {
			printf("Un entier t > 0 : ");
			scanf("%d%*c", &t);
		} while(t <= 0);
		
		do {
			r = (a + t) / 2;
			
			do {
				printf("Est ce que votre nombre est %d ? (> < =) ", r);
				scanf("%c%*c", &entry);
			} while(entry != '=' && entry != '<' && entry != '>');
			
			if(entry == '>') {
				a = r;
			}
			else if(entry == '<') {
				t = r;
			}
		} while(entry != '=');
		do {
			printf("Refaire ? (o/n)");
			scanf("%c%*c", &retry);
		} while(retry != 'o' && retry != 'O' && retry != 'n' && retry != 'N');
	} while(retry == 'O' || retry == 'o');
	return(0);
}
