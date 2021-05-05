#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N = 0;
	int cnt = 0;
	
	scanf("%d", &N);

	cnt = N / 5;

	if(N % 5 != 0)
	{
		for (; cnt >= 0; cnt--)
		{
			if ((N - 5 * cnt) % 3 == 0)
			{
				cnt += (N - 5 * cnt) / 3;

				break;
			}
		}
	}
	printf("%d", cnt);
	
	return 0;
}