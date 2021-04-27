#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

#define KEY 3

void Decryption(char answer[])
{
	const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int alphabetCount = strlen(alphabet);
	int length = strlen(answer);
	for (int i = 0; i < length; i++)
	{
		answer[i] = 'A' + (answer[i] - 'A' + alphabetCount - KEY) % alphabetCount;
	}
}

int main()
{
	const int alplabetCount = 'Z' - 'A' + 1;
	char encrypted[1001] = { '\0' };

	scanf("%s", encrypted);

	Decryption(encrypted);

	printf("%s", encrypted);

	return 0;
}