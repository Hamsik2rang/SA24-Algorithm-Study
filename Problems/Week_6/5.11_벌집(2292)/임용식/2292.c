#pragma warning(disable:4996)
#include <stdio.h>

#define BOONGBOONG 6

int main(void)
{
	int start = 1;
	int answer = 1;
	int n;

	scanf("%d", &n);

	for (int i = 1; n > start; i++, answer++)
	{
		start += BOONGBOONG * i;
	}

	printf("%d", answer);

	return 0;
}