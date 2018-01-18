#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned long long k, i, j, T, N, sum;
	char *sieve;

	scanf("%llu", &T);
	for (k=0; k<T; k++) {
		scanf("%llu", &N);
		sum = 0ULL;
		sieve = calloc(N, sizeof(char) + 1);
		for (i=2; i<=N; i++) {
			if (!sieve[i]) {
				sum += i;
				for (j = i*2; j<=N; j+=i) {
					sieve[j] = 1;
				}
			}
		}
		free(sieve);
		printf("%llu\n", sum);
	}
	return 0;
}
