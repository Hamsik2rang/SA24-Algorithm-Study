#pragma warning(disable:4996)
#include <stdio.h>

void Solution(int n)
{
	int a = 1, b = 0;

	while (n--)
	{
		int temp = b;
		b += a;
		a = temp;
	}
	printf("%d %d", a, b);
}

int main()
{
	int n;

	scanf("%d", &n);

	Solution(n);

	return 0;
}