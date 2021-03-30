#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int x = 0;
	scanf("%d", &n);
	for (int v = 0; v < n; v++)
	{
		for (int t = n; t > v+1; t--)
		{
			printf(" ");
		}
		while (x<v+1)
		{
			x++;
			printf("*");
		}
	x = 0;
	printf("\n");
	}
}