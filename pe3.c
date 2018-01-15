#include <stdio.h>

int main() {
	unsigned long long  i, j, T, N;
	scanf("%llu", &T);  
	for (i=0; i<T; i++) {
	  scanf("%llu", &N);
	  for (j=2ULL; j<N; j++) {
	    while (N % j == 0) {
	      N /= j;
	    }
	  }
	  if (N == 1)
	    printf("%d\n", 2);
	  else
	    printf("%llu\n", N);	
	}
	return 0;
}	   
