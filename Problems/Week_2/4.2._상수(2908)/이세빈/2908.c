#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a, b;
	int reversedA = 0, reversedB = 0;
	scanf("%d %d", &a, &b);

	for (int i = 0; i < 3; i++)
	{
		reversedA *= 10;
		reversedB *= 10;
		reversedA += a % 10;
		reversedB += b % 10;
		a /= 10;
		b /= 10;
	}

	printf("%d", reversedA > reversedB ? reversedA : reversedB);

	return 0;
}