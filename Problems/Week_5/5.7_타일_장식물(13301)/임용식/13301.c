#pragma warning(disable:4996)
#include <stdio.h>

long long Solution(int n)
{
	static long long memo[81] = { 0 };
	if (memo[n])
	{
		return memo[n];
	}
	if (n == 0 || n == 1)
	{
		return n;
	}
	memo[n] = Solution(n - 1) + Solution(n - 2);
	return memo[n];
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%lld", 2 * ((2 * Solution(n)) + (Solution(n - 1))));

	return 0;
}