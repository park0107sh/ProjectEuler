#include <stdio.h>

unsigned long long gcd(unsigned long long a, unsigned long long b) {
		unsigned long long r, t;
		if (a < b) {
			t = a;
			a = b;
			b = t;
		}

		while (r = a%b) {
			a = b;
			b = r;
		}
		return b;
}

unsigned long long lcm(unsigned long long a, unsigned long long b) {
		unsigned long long p = (unsigned long long)a * b;
		return p/gcd(a, b);
}

int main(void)
{
		unsigned long long ans = 1, i, j, T, N;
		scanf("%llu", &T);
		for (i=0; i<T; i++) {
			scanf("%llu", &N);
			for (j=1; j<=N; j++) {
				ans = lcm(ans, j);
			}
			printf("%llu\n", ans);
			ans=1;
		}
		return 0;
}
