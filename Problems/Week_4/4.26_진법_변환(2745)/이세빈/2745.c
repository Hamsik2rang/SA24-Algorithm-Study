//이번 문제는 너무 어려워서 소스 긁었습니다...

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int IsNumber(char c)
{
	return (c >= '0' && c <= '9');
}
int CharToInteger(char c)
{
	if (IsNumber(c))
	{
		return c - '0';
	}
	return c - 'A' + 10;
}
int ConvertBase(char n[], int base)
{
	int result = 0;
	int length = strlen(n);

	for (int i = 0; i < length; i++)
	{
		result *= base;
		result += CharToInteger(n[i]);
	}
	return result;
}
int main()
{
	char n[33];
	int base = 0;

	scanf("%s", n);
	scanf("%d", &base);
	printf("%d", ConvertBase(n, base));

	return 0;
}