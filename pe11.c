#include <stdio.h>

unsigned long long max(unsigned long long a, unsigned long long b)
{
		return a > b ? a : b;
}

int main(void) {
	unsigned long long grid[20][20];
	unsigned long long m = 0;
	int i, j, k, l;

	for (k=0; k<20; k++) {
		for (l=0; l<20; l++) {
			scanf("%d", &grid[k][l]);
		}
	}

	for (i=0; i<17; i++) {
		for (j=0; j<17; j++) {
			unsigned h = grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
			unsigned v = grid[j][i] * grid[j+1][i] * grid[j+2][i] * grid[j+3][i];
			unsigned d1 = grid[i][j] * grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3];
			unsigned d2 = grid[i][20-j-1] * grid[i+1][20-j-2] * grid[i+2][20-j-3] * grid[i+3][20-j-4];
			m = max(m, max(h, max(v, max(d1, d2))));
		}
	}
	printf("%llu\n", m);

	return 0;
}
