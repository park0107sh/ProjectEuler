#include <stdio.h>

unsigned long long divisor_count(unsigned long n)
{
	unsigned long long ret = 1;
	unsigned long long i;

	for (i=2; i<=n; i++) {
		unsigned long long c = 0;
		while (n%i == 0) {
			c++;
			n /= i;
		}
		ret *= c+1;
	}
	return ret;
}

int main(void) {
	unsigned long long i, j, n, T, N;

	scanf("%llu", &T);
	for (i=0; i<T; i++) {
		scanf("%llu", &N);
		j=1;
		n=1;
		while (divisor_count(n) <= N) {
			n+=++j;
		}
		printf("%llu\n", n);
	}
	return 0;
}		
