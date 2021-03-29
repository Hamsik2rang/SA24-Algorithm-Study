#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define LENGTH 1000001

int main()
{
	char stick[LENGTH];
	int stack = 0;
	int answer = 0;
	short isCutted = FALSE;
	scanf("%s", stick);
	int size = strlen(stick);

	for (int i = 0; i < size; i++)
	{
		if (stick[i] == '(')
		{
			stack++;
			isCutted = FALSE;
		}
		else
		{
			stack--;
			if (isCutted)
			{
				answer++;
			}
			else
			{
				isCutted = TRUE;
				answer += stack;
			}
		}
	}
	printf("%d", answer);

	return 0;
}
