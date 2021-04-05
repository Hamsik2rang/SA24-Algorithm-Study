#pragma warning(disable: 4996)
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, result, l, max, rest, k[10] = { 0 };
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	result = a * b * c;
	for (l = 0;; l++)
	{
		if (pow(10, l) >= result)
		{
			break;
		}
	}
	for (int y = l - 1; y >= 0; y--)
	{
		max = pow(10, y);
		rest = result / max;
		result = result % max;
		k[rest] = k[rest] + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", k[i]);
	}
}