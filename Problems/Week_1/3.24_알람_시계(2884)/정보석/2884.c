#include <stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int h, m;
	scanf("%d", &h);
	scanf("%d", &m);

	m = m >= 45 ? m - 45 : m + 60 - 45;
	h = m >= 15 ? h - 1 : h;
	h = h < 0 ? h + 24 : h;
	printf("%d %d\n", h, m);

	return 0;
}