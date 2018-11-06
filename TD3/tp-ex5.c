#include <stdio.h>

int main() {
	int sel, sucre, temp, prix;
	printf("sale ? (0 1) ");
	scanf("%d", &sel);
	printf("sucre ? (0 1) ");
	scanf("%d", &sucre);
	printf("chaud ? (0 1) ");
	scanf("%d", &temp);
	printf("cher ? (0 1) ");
	scanf("%d", &prix);
	
	if(sucre && !sel && !temp && !prix) printf(":-D\n");
	else if(!sucre && sel && temp) printf(":-)\n");
	else if(!sucre && !sel && !temp) printf(":-/\n");
	else if(sucre && sel && !temp) printf(":-(\n");
	else printf(":-|\n");
	return(0);
}
