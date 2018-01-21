#include <stdio.h>

unsigned count(unsigned n)
{
	unsigned c = 0;
	while (n > 1) {
		n = n%2==0 ? n/2 : 3*n+1;
		c++;
	}
	return c+1;
}

int main(void) {
	unsigned long long i, k, T, N, max_c, max_j;
	scanf("%llu", &T);
	for (i=0; i<T; i++) {
		scanf("%llu", &N);
		k=0;
		max_c=0;
		max_j=0;
		for (unsigned long long j=0; j<=N; j++) {
			unsigned long long c=count(j);
			if (c >= max_c) {
				max_c = c;
				max_j = j;
			}
		}
		printf("%llu\n", max_j);
	}
	return 0;
}
