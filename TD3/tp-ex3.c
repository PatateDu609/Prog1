#include <stdio.h>

int main() {
	int j, m, y, jmax;
	printf("j ? ");
	scanf("%d", &j);
	printf("m ? ");
	scanf("%d", &m);
	printf("y ? ");
	scanf("%d", &y);
	
	switch(m) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			jmax = 31;
			break;
		case 4: case 6: case 9: case 11:
			jmax = 30;
			break;
		case 2:
			if((y % 4 == 0) && (y % 100 != 0)) jmax = 29;
			else if(y % 400 == 0) jmax = 29;
			else jmax = 28;
			break;
		default:
			printf("Mois invalide : %d\n", m);
			return(0);
	}
	
	if(!(0 < j && j <= jmax)) {
		printf("Jour invalide.\n");
		return(0);
	}
	
	printf("Date : %d/%d/%d\n", j, m, y);
	return(0);
}
