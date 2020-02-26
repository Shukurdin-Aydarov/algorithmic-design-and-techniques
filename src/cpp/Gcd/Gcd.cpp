#include "Gcd.h"

int Gcd::Naive(int a, int b) {
	int divisor = 1;
	for (int i = 1; i <= a + b; i++) {
		if (a % i == 0 && b % i == 0)
			divisor = i;
	}

	return divisor;
}

int Gcd::Efficient(int a, int b) {
	if (a > b) return Efficient(b, a);

	if (a == 0) return b;
	
	int r = b % a;
	return Efficient(r, a);
}