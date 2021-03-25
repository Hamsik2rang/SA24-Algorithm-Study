#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int h, m;
	scanf("%d %d", &h, &m);
	m = m - 45;
	if (m < 0)	
	{
		m = m + 60;
		h = h - 1;
	}
	if (h < 0) 
	{
		h = h + 24;
	}
	printf("%d %d", h, m);
}