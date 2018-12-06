#include <stdio.h>
#include <math.h>

double pi = acos(-1);

typedef struct Coord {
	float x;
	float y;
} Coord;

void tri(Coord * coor, int n) {
	Coord tmp;
	int shuffled;
	do {
		shuffled = 0;
		for(int i = 0; i < n - 1; i++) {
			if(coor[i].y > coor[i + 1].y) {
				tmp = coor[i + 1];
				coor[i + 1] = coor[i];
				coor[i] = tmp;
				shuffled = 1;
			}
		}
	} while(shuffled);
}

float f(float x) {
	return exp(-x) * sin(2 * pi * x);
}

float arrondir(float a, int p) {
	float po = pow(10, p);
	return floor(a * po) / po;
}

float nearest(float a, int p) {
	if(a > 0) {
		a *= 100;
		int ai = (int)a % p;
		int aq = (int)a / p;
		if(ai <= p / 2) return (float)aq * p / 100;
		else return (float)(aq * p + p) / 100;
	}
	else {
		a *= -100;
		int ai = (int)a % p;
		int aq = (int)a / p;
		if(ai <= p / 2) return (float)-aq * p / 100;
		else return (float)(-aq * p - p) / 100;
	}
}

int main() {
	float x = -1.f, y = 2.5f; //x E [-1, 1] et y E [-1.5, 2.5]
	Coord c;
	Coord coor[2 * (int)(1/0.05)];
	for(int i = 0; i < 40; i++, x += 0.05f) {
		c.x = x;
		c.y = arrondir(f(x), 2);
		coor[i] = c;
	}
	tri(coor, 40);
	for(int i = 39; i >= 0; y -= 0.05f) {
		if(nearest(coor[i].y, 5) == y) {
			int spaces = coor[i].x / 0.05;
			printf("jhgsqkhd\n");
		}
		else i--;
	}

	return(0);
}
