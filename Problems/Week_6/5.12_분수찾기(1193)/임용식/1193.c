#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n, num, denom;
	scanf("%d", &n);
	int i = 1;

	while (i < n)
	{
		n -= i;
		i++;
	}
	num = i % 2 ? i - n + 1 : n;
	denom = i % 2 ? n : i - n + 1;
	printf("%d/%d", num, denom);

	return 0;
}