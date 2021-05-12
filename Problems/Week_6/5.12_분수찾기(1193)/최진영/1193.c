#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void fract (int a);

int main()
{
	int count;
	scanf("%d", &count);
	fract(count);
	return 0;
}

void fract(int a)
{
	int k = 1;
	int mother=1, son=1;
	for (int i = 1;; i++)
	{
		if (mother <= son)
		{
			mother = mother + 1;
			for (int j = 0; mother > 1; j++)
			{
				printf("%d %d %d\n", mother, son, k);
				mother=mother-1;
				son=son+1;
				k++;
				if (k == a)
				{
					break;
				}
			}
		}
		else if (son > mother)
		{
			son = son + 1;
			for (int l = 0; son > 1; l++)
			{
				printf("%d %d %d\n", mother, son, k);
				mother=mother+1;
				son=son-1;
				k++;
				if (k == a)
				{
					break;
				}
			}
		}
		if (k == a)
		{
			break;
		}
	}
	printf("%d/%d", son, mother);
}