#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n=0, m=0;
	int a, b=0,c;
	int v;
	scanf("%d", &n);
	scanf("%d", &m);
	for (v = 0; v*v<m+1 ; v++)
	{
		a = v*v;
			if (a>n-1)
			{
				b = b + a;
			}
	}
	for (int l = v; l*l > n - 1; l--)
	{
		c = l * l;
	}
	if (b > 0)
	{
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else
	{
		printf("-1");
	}
}