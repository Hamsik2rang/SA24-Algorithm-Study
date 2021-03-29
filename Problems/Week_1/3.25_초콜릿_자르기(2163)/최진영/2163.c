#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d",&a,&b);
	c = a * b;
	c = c - 1;
	printf("%d\n", c);
}