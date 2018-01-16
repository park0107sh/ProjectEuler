#include <stdio.h>

int is_palind(unsigned int n)
{
		unsigned int reversed = 0, t = n;

		while (t) {
				reversed = 10*reversed + (t % 10);
				t /= 10;
		}
		return reversed == n;
}

int main(void)
{
	unsigned int T, k, N, i, j, p = 0, max = 0;
	scanf("%d", &T);
	for (k=0; k<T; k++) {
		scanf("%d", &N);
		for (i=100; i<=999; i++) {
			for (j=100; j<=999; j++) {
				p = i*j;
				if (p < N) {
					if (is_palind(p) && p > max)
							max = p;
				}
			}
		}
		printf("%u\n", max);
	}
	return 0;
}
