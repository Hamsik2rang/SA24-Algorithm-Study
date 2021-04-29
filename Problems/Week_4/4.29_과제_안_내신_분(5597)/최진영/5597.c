#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int student[31] = { 0, };
	int reporter;
	for (int i = 1; i < 29; i++)
	{
		scanf("%d", &reporter);
		student[reporter] += 1;
	}
	for (int j = 1; j <= 30; j++)
	{
		if (student[j] == 0)
		{
			printf("%d\n", j);
		}
	}
	return 0;
}