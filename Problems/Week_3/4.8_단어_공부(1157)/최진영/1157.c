#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[1000000] = {0,};
	int count[91] = { 0, };
	int result;
	scanf("%s", word);
	for (int w = 0;; w++)
	{
		if (word[w] > 96)
		{
			word[w]= word[w]-32;
		}
		else if (word[w] == 0)
		{
			break;
		}
	}

	for (int v=0;;v++)
	{
		if (word[v] == 0)
		{
			break;
		}
			count[(int)word[v]] += 1;
	}

	for (int t = 65; t < 91; t++)
	{
		if (count[t] > count[t - 1])
		{
			result = t;
		}
		else if (count[t] < count[t - 1])
		{
			count[t] = count[t - 1];
		}
		else if (count[t] || count[t - 1])
		{
			result = 63;
		}
	}
	printf("%c", (char)result);
	return 0;
}