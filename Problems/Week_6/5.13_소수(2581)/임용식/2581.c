#pragma warning(disable:4996)
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int Solution(int m, int n, int* const answer, int* const min)
{
	int isPrime[10001] = { FALSE };
	int check[10001] = { FALSE };
	for (int i = 2; i <= n; i++)
	{
		if (check[i])
		{
			continue;
		}
		check[i] = TRUE;
		isPrime[i] = TRUE;
		for (int j = i * 2; j <= n; j += i)
		{
			check[j] = TRUE;
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (isPrime[i])
		{
			*answer += i;
			if (*min == 0)
			{
				*min = i;
			}
		}
	}
	return *answer;
}

int main()
{
	int m, n;
	int answer = 0, min = 0;

	scanf("%d %d", &m, &n);

	if (Solution(m, n, &answer, &min))
	{
		printf("%d\n%d", answer, min);
	}
	else
	{
		printf("-1");
	}

	return 0;
}