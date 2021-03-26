#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int h, m, s;
	int addSec;
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &addSec);

	s += addSec % 60;
	addSec /= 60;
	s >= 60 ? s %= 60, m += 1 : 0;
	m += addSec % 60;
	m >= 60 ? m %= 60, h += 1 : 0;
	addSec /= 60;
	h += addSec % 24;
	h >= 24 ? h %= 24 : 0;

	printf("%d %d %d", h, m, s);

	return 0;
}