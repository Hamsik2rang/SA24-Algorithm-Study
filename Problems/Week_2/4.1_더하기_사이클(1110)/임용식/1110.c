#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	unsigned short n, origin;
	int cycle = 0;
	scanf("%hud", &n);
	origin = n;

	do
	{
		n = n % 10 * 10 + (n / 10 + n % 10) % 10;
		cycle++;
	} while (origin != n);

	printf("%d", cycle);

	return 0;
}