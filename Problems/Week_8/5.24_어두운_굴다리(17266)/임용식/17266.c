#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int Solution(int n, int m, int lamp[], int left, int right)
{
	if (left >= right)
	{
		return right;
	}

	int range = (left + right) / 2;
	int last = 0;
	char isAnswer = 1;
	for (int i = 0; i < m; i++)
	{
		if (lamp[i] - range <= last)
		{
			last = lamp[i] + range;
		}
		else
		{
			isAnswer = 0;
			left = range + 1;
			break;
		}
	}
	if (isAnswer && last < n)
	{
		left = range + 1;
	}
	else if (isAnswer && last >= n)
	{
		right = range;
	}
	return Solution(n, m, lamp, left, right);
}

int main()
{
	int lamp[100001] = { 0 };
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &lamp[i]);
	}

	printf("%d", Solution(n, m, lamp, 0, n));

	return 0;
}