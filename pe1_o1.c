#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned long long  s3 = 0, s5 = 0, s15 = 0;
	unsigned long long i, T, N, p;
	unsigned long long sum;

	scanf("%lld", &T);
	for (i=0; i<T; i++) {
	  scanf("%lld", &N);
	  sum = 0;
	  p = (N-1)/3;
	  sum = ((3*p*(p+1))/2);

	  p = (N-1)/5;
	  sum = sum + ((5*p*(p+1))/2);

	  p = (N-1)/15;
	  sum = sum - ((15*p*(p+1))/2);
	  printf("%lld\n", sum);
	}
	return 0;
}
