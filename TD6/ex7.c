#include <stdio.h>
#include <limits.h>
#include <math.h>

int cube(int n) {
	return pow(n, 3);
}

int sommecube(int n) {
	int s = 0, ns = n;
	while(n != 0) {
		s += cube(n % 10);
		n /= 10;
	}
	return s == ns;
}

int main() {
	for(int i = 0; i <= INT_MAX; i++)
		if(sommecube(i)) printf("%d\n", i);
	return(0);
}
