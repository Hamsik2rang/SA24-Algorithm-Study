#pragma warning(disable:4996)
#include <stdio.h>

int GetFibonacci(int n)
{
	return (n == 1 || n == 0) ? n : GetFibonacci(n - 1) + GetFibonacci(n - 2);
}
int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", GetFibonacci(n));

	return 0;
}