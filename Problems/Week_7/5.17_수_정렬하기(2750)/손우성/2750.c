#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ar1[1001] = { 0 };
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &ar1[i]);
	}
	for (int i = 0; i < N; i++)
	{
		int nst = i;
		for (int j = i + 1; j < N; j++)
		{
			if (ar1[nst] > ar1[j])
			{
				nst = j;
			}
		}
		if (nst != i)
		{
			ar1[nst] ^= ar1[i];
			ar1[i] ^= ar1[nst];
			ar1[nst] ^= ar1[i];
		}
		printf("%d\n", ar1[i]);
	}
	return 0;
}