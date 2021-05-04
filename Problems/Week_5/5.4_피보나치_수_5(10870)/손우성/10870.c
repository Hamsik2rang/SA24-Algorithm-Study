#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pibonachi(int n);

int main()
{
	int a1, a2 = 0;
	scanf("%d", &a1);
	a2 = pibonachi(a1);
	printf("%d\n", a2);
}

int pibonachi(int n)
{
	int result = 0;
	int x = 1, y = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		result = x + y;
		x = y;
		y = result;
	}
	return result;
}