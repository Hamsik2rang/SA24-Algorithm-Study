#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char result[81] = {0};
	int num, point=0, score[10000] = {0,};
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%s", result);
		for (int v = 0;; v++)
		{
			if (result[v] == 'O')
			{
				point = point + 1;
				score[i] = score[i] + point;
			}
			else if (result[v] == 'X')
			{
				point = 0;
			}
			else
			{
				point = 0;
				v = 0;
				break;
			}
		}
	}
	for (int k = 0; k < num; k++)
	{
		printf("%d\n", score[k]);
	}
	return 0;
}