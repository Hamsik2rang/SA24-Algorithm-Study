#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int result(char alphabet);

int result(char alphabet)
{
	int count[26] = { 0, };
	if (alphabet>=97 && alphabet<=122)
	{
		count[(int)alphabet - 97]+=1;
	}
	return count[(int)alphabet - 97];
}

int main()
{
	int num[26] = { 0, };
	char word[100] = { 0, };
	scanf("%s", word);
	for (int i = 0;; i++)
	{
		if (word[i] == 0)
		{
			break;
		}
		num[(int)word[i]-97]+=result(word[i]);
	}
	for (int j = 0; j <= 25; j++)
	{
		printf("%d ", num[j]);
	}
	return 0;
}