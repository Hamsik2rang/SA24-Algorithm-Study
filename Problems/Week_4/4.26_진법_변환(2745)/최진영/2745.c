#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int B = 0, antil = 0;
	long long int hap=0;
	char N[7] = { 0, };
	scanf("%s %d", &N, &B);
	for (int i = 0; i <=6; i++)
	{
		if (N[6-i] != 0)
		{
			if (N[6 - i] > 64 && N[6 - i] <= 90)
			{
				N[6 - i] = N[6 - i] - 55;
			}
			else if (N[6 - i] >= 48 && N[6 - i] < 85)
			{
				N[6 - i] = N[6 - i] - 48;
			}
			hap += N[6 - i] * pow(B, antil);
			antil++;
		}
	}
	printf("%lld\n", hap);
	return 0;
}
//살려주세요. 스스로 테스트 20번 돌렸을땐 답이 나오는데 틀렸데요.