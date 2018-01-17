#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned long long i, p, T, N, K, max;
	scanf("%lld",  &T);
	for (i=0; i<T; i++) {
		scanf("%lld %lld", &N, &K);
		char* num = (char *)malloc(512000 * sizeof(char));
		scanf("%s", num);
		max = 0;
		size_t i;
		for (i=0; i<(N-K); i++) {
			p = 1;
			size_t j;

			for (j=0; j<K; j++) {
			p *= (unsigned)(num[i+j]-'0');
			}
			if (p > max) {
				max = p;
			}
		}
		printf("%lld\n", max);
	}
	return 0;
}
