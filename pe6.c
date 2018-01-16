#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned long long i, j, sqsum, sumsq, sum, T, N;
	scanf("%llu", &T);
	for (i=0; i<T; i++) {
			scanf("%llu", &N);
			sqsum=0;
			sumsq=0;
			for (j=1; j<=N; j++) {
				sqsum += (j*j);
				sumsq += j;
			}
			sum = (sumsq * sumsq) - sqsum;
			printf("%llu\n", sum);
	}
	return 0;
}
