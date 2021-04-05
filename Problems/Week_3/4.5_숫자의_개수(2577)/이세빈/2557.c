#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a, b, c;
	int numCount[10] = { 0 };

	scanf("%d %d %d", &a, &b, &c);
	int mul = a * b * c;

	while (mul)
	{
		numCount[mul % 10]++;
		mul /= 10;
	}
	for (int i = 0; i < sizeof(numCount) / sizeof(int); i++)
	{
		printf("%d\n", numCount[i]);
	}
	return 0;
}