#pragma warning(disable:4996)
#include <stdio.h>

int Solution(int sugar)
{
	int answer = 0;

	while (1)
	{
		if (sugar < 0)
		{
			return -1;
		}
		if (sugar % 5 == 0)
		{
			answer += sugar / 5;
			break;
		}
		sugar -= 3;
		answer++;
	}

	return answer;
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", Solution(n));

	return 0;
}