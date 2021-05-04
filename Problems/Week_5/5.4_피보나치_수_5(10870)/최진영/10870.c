#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pibonachi(int n);

int main()
{
	int count, last = 0;
	scanf("%d", &count);
	last = pibonachi(count);
	printf("%d\n", last);
}

int pibonachi(int n)
{
	int result = 0;
	int original = 1, change =0;
	for (int i = 0; i <= n-1; i++)
	{
		result = original+change;
		original = change;
		change = result;
	}
	return result;
}