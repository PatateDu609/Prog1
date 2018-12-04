#include <string.h>
#include <stdio.h>

#define NBL 26
#define TAILLE 50
#define CLE 11

int codeN(int n, int a) {
	return (n * a) % NBL;
}

char codeChar(char c, int a) {
	if(c >= 'a' && c <= 'z') return 'a' + codeN(c - 'a', a);
	
	return c;
}

void codeChaine(char * c1, char * c2, int a) {
	int l = strlen(c1);
	for(int i = 0; i < l; i++) {
		*(c2 + i) = codeChar(*(c1 + i), a);
	}
	*(c2 + l) = '\0';
}

void createDecode(char * decode, int a) {
	for(int i = 0; i < NBL; i++) {
		char y = 'a' + i, x;
		int j = 0;
		while(j < NBL) {
			x = 'a' + j;
			if(codeChar(x, a) == y) break;
			j++;
		}
		decode[i] = x;
	}
}

void createCode(char * code, int a) {
	for(int i = 0; i < NBL; i++) code[i] = codeChar('a' + i, a);
}

int essai(int a, int u) {
	for(int i = 0; i < NBL; i++) {
		char c = 'a' + i;
		if(c != codeChar(codeChar(c, a), u)) return 0;
	}
	
	return 1;
}

int cleInverse(int a, int * b) {
	for(int i = 0; i < NBL; i++) {
		if(essai(i, a)) {
			*b = i;
			return 1;
		}
	}
	
	return 0;
}

int main() {
	char ch[] = "chaine de test\0", cr[TAILLE];
	int inv;
	
	codeChaine(ch, cr, CLE);
	printf("CLE = %d, ch = %s, cr = %s\n", CLE, ch, cr);
	
	if(cleInverse(CLE, &inv)) printf("inverse = %d", inv);
	else printf("pas d'inverse");
	printf("\n");
	
	return 0;
}
