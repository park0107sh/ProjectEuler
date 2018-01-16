#include <stdio.h>

unsigned long long prime(unsigned long long i) {
	unsigned long long j;
	if (i <= 1) return 0;
	if (i%2==0 && i>2) return 0;
	for (j=3; j<=i/2; j+=2) {
			if (i%j == 0)
				return 0;
	}
	return 1;
}

int main(void) {
	unsigned long long i, j, k, p, T, N;
	scanf("%llu", &T);
	for (i=0; i<T; i++) {
		scanf("%llu", &N);
		k=0;
		for (p=1; p<100000; p++) {
			if (prime(p)) {
				k++;
				if (k==N) {
					printf("%llu\n", p);
					break;
				}
			}
		}
	}
	return 0;
}
