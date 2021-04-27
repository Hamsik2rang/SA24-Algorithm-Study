#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char anigma(char word);

int main()
{
	char code[1001] = { 0, }, origin[1001] = { 0, };
	scanf("%s", code);
	for (int i = 0;; i++)
	{
		if (code[i] == 0)
		{
			break;
		}
		origin[i] = anigma(code[i]);
	}
	printf("%s", origin);
	return 0;
}

char anigma(char word)
{
	char result;
	result = word;
	if (result >= 68 && result <= 90)
	{
		result = result - 3;
	}
	else if(result >= 65 && result <= 67)
	{
		result = result + 23;
	}
}