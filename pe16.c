#include <stdio.h>

int power(unsigned long long a, unsigned long long b) {
		unsigned long long i, p;
		p=1;
		for (i=0; i<b; i++) 
				p *= a;
		return (p);
}
int main(void) {
		unsigned long long i, p, k, T, N;
		scanf("%llu", &T);
		for (i=0; i<T; i++) {
				scanf("%llu", &N);
				p=power(2, N);
				k=0;
				while (p > 0) {
						k += p%10;
						p = p/10;
				}
				printf("%llu\n", k);
		}
		return 0;
}
