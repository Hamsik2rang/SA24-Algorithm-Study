 #pragma warning(disable:4996)
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
	int m, n;
	int min = 0, sum = 0;
	int isMinFounded = FALSE;
	scanf("%d %d", &m, &n);

	for (int i = 1; i * i <= n; i++)
	{
		if (m <= i * i)
		{
			sum += i * i;
			if (!isMinFounded)
			{
				isMinFounded = TRUE;
				min = i * i;
			}
		}
	}

	if (!isMinFounded)
	{
		printf("%d", -1);
	}
	else
	{
		printf("%d\n%d", sum, min);
	}

	return 0;
}