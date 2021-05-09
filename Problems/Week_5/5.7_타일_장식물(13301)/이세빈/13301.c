#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n;
	long long F[81];

	F[0] = 1;
	F[1] = 1;

	scanf("%d", &n);

	for (int i = 2; i <= n + 1; i++) F[i] = F[i - 2] + F[i - 1];

	printf("%lld", F[n + 1] * 2);

	return 0;
}