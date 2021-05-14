#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int posit(int a, int b, int c, int A, int B, int C);

int main()
{
	int test;
	int ends;
	int x1, y1, r1, x2, y2, r2;
	scanf("%d", &test);
	for (int i = 0; i < test; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		ends = posit(x1, y1, r1, x2, y2, r2);
		printf("%d\n", ends);
	}
	return 0;
}

int posit(int a, int b, int c, int A, int B, int C)
{
	int result ;
	if (a == A && b == B && c == C)
	{
		result = -1;
	}
	else if (sqrt(pow(fabs(a - A), 2) + pow(fabs(b - B), 2)) < c + C && fabs(c - C) < sqrt(pow(fabs(a - A), 2) + pow(fabs(b - B), 2)))
	{
		result = 2;
	}
	else if (sqrt(pow(fabs(a - A), 2) + pow(fabs(b - B), 2)) == c + C || sqrt(pow(fabs(a - A), 2) + pow(fabs(b - B), 2)) == fabs(c - C))
	{
		result = 1;
	}
	else if (sqrt(pow(fabs(a - A), 2) + pow(fabs(b - B), 2)) > c + C || fabs(c - C) > sqrt(pow(fabs(a - A), 2) + pow(fabs(b - B), 2)))
	{
		result = 0;
	}
	return result;
}