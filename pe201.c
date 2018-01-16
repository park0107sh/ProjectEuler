#include <stdio.h>
#include <string.h>

void unisum(int ar[], int end)
{
	int i, j, sum;
	for (i = 0; i<= end-1; i++)
	{
		for (j = i+1; j <= end-1; j++)
		{
			if (ar[i] == ar[j])
			{
				ar[j] = 0;
				ar[i] = 0;
			}
		}
	}
	sum = 0;
	for (i = 0; i<= end-1; i++)
		sum = sum + ar[i];
	printf("%d\n", sum);
}

void subset(int arr[], int data[], int start, int end, int index, int r, int ar[])
{
	int j, i, sum;
	if (index == r) {
		sum = 0;
		for (j = 0; j < r; j++)
			sum = sum + data[j];
			if (ar[sum] == sum)
				ar[sum] = 0;
			else
				ar[sum] = sum;
		return;
	}
	for (i = start; i <= end && end - i + 1 >= r - index ; i++)
	{ 
		data[index] = arr[i];
		subset(arr, data, i+1, end, index+1, r, ar);
	}
}

void printsubset(int arr[], int n, int r)
{
	int data[r], ar[10000]={};
	subset(arr, data, 0, n - 1, 0, r, ar);
	unisum(ar, 10000);
}

int main()
{
	int arr[100], nk[102]={}, i;
	scanf("%d ", &nk[0]);
	scanf("%d", &nk[1]);
	for (i = 0; i < nk[0]; i++)
		scanf("%d", &arr[i]);
	printsubset(arr, nk[0], nk[1]);
	return 0;

}
