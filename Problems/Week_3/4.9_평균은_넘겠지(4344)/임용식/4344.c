#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int studentCount;
		scanf("%d", &studentCount);
		int score[1000];
		int average = 0;
		int count = 0;
		for (int i = 0; i < studentCount; i++)
		{
			scanf("%d", &score[i]);
			average += score[i];
		}
		average /= studentCount;

		for (int i = 0; i < studentCount; i++)
		{
			if (score[i] > average)
			{
				count++;
			}
		}
		printf("%.3lf%%\n", (double)count * 100 / studentCount);
	}

	return 0;
}