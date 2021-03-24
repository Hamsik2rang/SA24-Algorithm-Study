#include<stdio.h>

int main(void)
{
	int H, M;

	scanf_s("%d %d", &H, &M);
	if (H == 0)
	{
		if (M < 45)
		{
			H = 23; M = M + 60 - 45;
			printf("%d %d", H, M);
		}
		else
		{
			M = M - 45;
			printf("%d %d", H, M);
		}
	}
	else
	{
		if (M < 45)
		{
			H = H - 1; M = M + 60 - 45;
			printf("%d %d", H, M);
		}
		else
		{
			M = M - 45;
			printf("%d %d", H, M);
		}
	}
	return 0;
}
