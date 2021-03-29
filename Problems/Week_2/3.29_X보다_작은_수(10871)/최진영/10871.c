#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	int n, x;
	scanf("%d %d", &n, &x);
	for (int v = 0; v < n; v++)
	{
		scanf("%d", &a);
		if (a < x)
		{
			printf("%d ", a);
		}
	}
		
}