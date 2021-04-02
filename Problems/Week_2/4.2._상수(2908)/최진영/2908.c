#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	int ar, arr, arrr, br, brr, brrr;
	scanf("%d %d", &a, &b);
	ar = a / 100;
	arr = (a % 100) / 10;
	arrr= (a % 100) % 10;
	br = b / 100;
	brr = (b % 100) / 10;
	brrr = (b % 100) % 10;
	a = arrr * 100 + arr * 10 + ar;
	b = brrr * 100 + brr * 10 + br;
	if (a < b)
	{
		printf("%d", b);
	}
	else if(a > b)
	{
		printf("%d", a);
	}
}