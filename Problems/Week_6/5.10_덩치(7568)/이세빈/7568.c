#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int N, k = 0;
	int x[50] = { 0, };
	int y[50] = { 0, };

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d %d", &x[i], &y[i]);

	for (int i = 0; i < N; i++)
	{
		k = 0;
		for (int j = 0; j < N; j++)
		{
			if (x[i] < x[j] && y[i] < y[j])
				k++;
		}
		printf("%d", k + 1);
	}
	return 0;
}