#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int many;
	int num[1000];
	int change;
	scanf("%d", &many);
	for (int i = 0; i < many; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int j = 0; j < many; j++)
	{
		int index = j;
		for (int l = j + 1; l < many; l++)
		{
			if (num[l] < num[j])
			{
				index = l;
				if (index != j)
				{
					change = num[index];
					num[index] = num[j];
					num[j] = change;
				}
			}
		}
		printf("%d\n", num[j]);
	}
}