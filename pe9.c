#include <stdio.h>

int main(void) {
	unsigned long long i, a, b, c, T, N, max;
	scanf("%llu", &T);
	for (i=0; i<T; i++) {
		scanf("%llu", &N);
		max = 0;
		for (a=1; a<(N/3); a++) {
			b = (N*N - 2*N*a)/(2*N-2*a);
			//test5 pass then, for(b=1;b<(2*N/3);b++);
			c = (N-a-b);
			if (a*a + b*b == c*c) {
				max = a*b*c;
			}
		}
		if (max == 0)
			printf("%d\n", -1);
		else
			printf("%llu\n", max);
	}
	return 0;
}

