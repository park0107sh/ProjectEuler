#include <stdio.h>

unsigned long long fact(unsigned long long n) {
		unsigned long long i;
		for (i=n-1; i>0; i--) 
				n *= i;
		return (n);
}


int main(void) {
	unsigned long long i, ans, T, N1, N2;
	scanf("%llu", &T);
	for (i=0; i<T; i++) {
		scanf("%llu", &N1);
		scanf("%llu", &N2);

		ans=fact(N1+N2)/(fact(N1)*fact(N2));
		printf("%llu\n", ans);
	}
	return 0;
}
