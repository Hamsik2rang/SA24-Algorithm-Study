#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int B = 0, antil = 0;
	long long int hap=0;
	char N[33] = { 0, };
	scanf("%s %d", &N, &B);
	for (int i = 0; i<=32; i++)
	{
		if (N[32-i] != 0)
		{
			if (N[32 - i] > 64 && N[32 - i] <= 90)
			{
				N[32 - i] = N[32 - i] - 55;
			}
			else if (N[32 - i] >= 48 && N[32 - i] < 85)
			{
				N[32 - i] = N[32 - i] - 48;
			}
			hap += N[32 - i] * pow(B, antil);
			antil++;
		}
	}
	printf("%lld", hap);
	return 0;
}