#include <stdio.h>
int main()
{
	int d;
	int tall[100];
	int result[100];
	result[0] = 0;
	scanf_s("%d", &d);
	for (int a = 0; a < d; a++)
	{
		scanf_s("%d", &tall[a]);
	} //탑 개수와 높이 입력 받기
	for (int b = d; b >0; b--)
	{
		for (int a = b; a > 0; a--)
		{
			if (tall[b] < tall[a])
			{
				result[b] = a+1;
				break;
			}
		}
	}
	for (int a = 0; a < d; a++)
	{
		printf("%d ",result[a] );
	}
}