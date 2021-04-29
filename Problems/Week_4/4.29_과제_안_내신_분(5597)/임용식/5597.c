#pragma warning(disable:4996)
#include <stdio.h>

void Check(int isSubmit[], int answer[])
{
	for (int i = 1; i <=28; i++)
	{
		int num;
		scanf("%d", &num);
		isSubmit[num] = 1;
	}
	int unchecked = 0;
	for (int i = 1; i <= 30; i++)
	{
		if (!isSubmit[i])
			answer[unchecked++] = i;
	}
}


int main()
{
	int isSubmit[31] = { 0 };
	int answer[2] = { 0 };

	Check(isSubmit, answer);

	printf("%d\n%d", answer[0], answer[1]);

	return 0;
}