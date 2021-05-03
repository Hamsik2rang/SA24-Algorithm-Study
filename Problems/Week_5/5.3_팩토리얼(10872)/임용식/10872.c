#pragma warning(disable:4996)
#include <stdio.h>

int GetFactorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return n * GetFactorial(n - 1);
}

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d", GetFactorial(n));

	return 0;
}