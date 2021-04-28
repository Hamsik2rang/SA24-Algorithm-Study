#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

void CountAlphabetInWord(char word[], int answer[])
{
	for (int i=0; word[i]; i++)
	{
		answer[word[i] - 'a']++;
	}
}

int main()
{
	char word[101]={ '\0' };
	int answer['z' - 'a' + 1]={ 0 };
	scanf("%s", word);

	CountAlphabetInWord(word, answer);

	for (int i=0; i < 'z' - 'a' + 1; i++)
	{
		printf("%d ", answer[i]);
	}

	return 0;
}