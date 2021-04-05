#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, result,length, max,rest, v[10] = {0} ;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	result = a * b * c;
	for (length = 0;; length++)
	{
		if (pow(10, length) >= result)
		{
			
			break;
		}
	}
	for (int y = length-1 ; y >=0; y--)
	{
		max = pow(10, y);
		rest = result / max;
		result = result % max;
		v[rest] = v[rest] + 1;
	}
	for (int j = 0; j < 10; j++)
	{
		printf("%d\n", v[j]);
	}
}