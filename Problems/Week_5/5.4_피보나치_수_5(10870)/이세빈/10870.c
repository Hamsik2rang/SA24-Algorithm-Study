#pragma warning(disable:4996)
#include <stdio.h>

int Fibo(int num)
{
	if (num > 1)
		return Fibo(num - 1) + Fibo(num - 2);
	else
		return num;
}
int main(void)
{
	int N;

	scanf("%d", &N);
	printf("%d\n", Fibo(N));

	return 0;
}