#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int t;

	scanf("%d", &t);

	while (t--)
	{
		char result[80];
		scanf("%s", result);
		int point = 0;
		int score = 0;

		for (size_t i = 0; i < strlen(result); i++)
		{
			result[i] == 'O' ? point++ : (point = 0);
			score += point;
		}
		printf("%d\n", score);
	}
	return 0;
}