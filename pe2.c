#include <stdio.h>

int main(void)
{
	unsigned long long a1 = 1, a2 = 1, a3 = 0, sum = 0;
	unsigned long long T, N, i, j;

	scanf("%lld", &T);
	for (i=0; i<T; i++){
	  scanf("%lld", &N);
	  while (a3 < N) {
	    sum += a3 * !(a3%2);
	    a3 = a1 + a2;
	    a1 = a2;
	    a2 = a3;
	  }
	  printf("%lld\n", sum);
	  a1=1;
	  a2=1;
	  a3=0;
	  sum=0;
	}

	return 0;
}
