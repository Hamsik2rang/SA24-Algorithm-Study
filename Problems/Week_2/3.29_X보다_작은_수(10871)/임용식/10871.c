#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n, x;
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
	{
		int temp;
		scanf("%d", &temp);
		if (temp < x)
		{
			printf("%d ", temp);
		}
	}

	return 0;
}