#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int cal(long long int a, long long int b, long long int c);

int main()
{
	long long int A, B, C;
	int	finals;
	scanf("%lld %lld %lld", &A, &B, &C);
	finals = cal(A, B, C);
	printf("%d", finals);
	return 0;
}

int cal(long long int a, long long int b, long long int c)
{
	long long int fix = 0, change = 0;
	int result;
	if (b >= c)
	{
		result = -1;
		return result;
	}
	else
	{
		fix = c - b;
		change = a / fix;
		result = change + 1;
		return result;
	}
}