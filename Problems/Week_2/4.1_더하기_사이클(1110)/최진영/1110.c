#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b,c,d,e,f=0;
	int result = 0;
	scanf("%d", &a);
	if (a < 10)
	{
		a = a * 10;
	}
	e = a;
	for (int v = 0; ; v++)
	{
		b = a / 10;
		c = a % 10;
		d = b + c;
		if (d >= 10)
		{
			d = d % 10;
		}
		a = c*10 + d;
		result = result + 1;
		if (e==a)
		{
			printf("%d\n", result);
			break;
		}
	}
}