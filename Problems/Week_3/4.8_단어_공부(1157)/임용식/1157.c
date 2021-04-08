#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char word[1000001] = { '\0' };
	int alphabet['Z' - 'A' + 1] = { 0 };
	int hasSameMax = 0;
	int maxIndex = 0;
	scanf("%s", word);

	for (int i = 0; word[i]; i++)
	{
		alphabet[(word[i] - 'A') % ('a' - 'A')]++;
	}
	int max = 0;
	for (int i = 0; i < sizeof(alphabet) / sizeof(alphabet[0]); i++)
	{
		if (max < alphabet[i])
		{
			hasSameMax = 0;
			max = alphabet[i];
			maxIndex = i;
		}
		else if (max == alphabet[i])
		{
			hasSameMax = 1;
		}
	}
	hasSameMax ? printf("?") : printf("%c",'A'+maxIndex);

	return 0;
}