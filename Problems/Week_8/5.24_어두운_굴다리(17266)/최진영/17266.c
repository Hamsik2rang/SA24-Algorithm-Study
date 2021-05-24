#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int higher(int length, int many);

int main()
{
	int wide;
	scanf("%d", &wide);
	getchar();
	int count;
	scanf("%d", &count);
	getchar();
	int high;
	high = higher(wide, count);
	printf("%d", high);
	return 0;
}

int higher(int length, int many)
{
	int rocated[100000] = { 0, };
	int route[100000] = { 0, };
	int* a = route;
	int tall;
	int k, begin, b, mid, result[100000] = { 0, };
	for (int j = 0; j < many; j++)
	{
		scanf("%d", &a[j]);
	}
	for (int v = 0; v < many; v++)
	{
		begin = 0;
		b = length - 1;
		while (begin < b)
		{
			mid = (begin + b) / 2;
			if (a[v] == mid)
				result[v] = mid;
			else if (mid < a[v])
				b = mid - 1;
			else
				begin = mid + 1;
		}
		for (tall = 1; tall<result[v];  tall++)
		{
			if (result[v] - tall >= 0 && result[v] + tall - 1 < length)
			{
				rocated[result[v] - tall] = 1;
				rocated[result[v] + tall - 1] = 1;
			}
			else
			{
				break;
			}
		}
		for (k = 0; k < length; k++)
		{
			if (rocated[k] != 1)
			{
				break;
			}
		}
		if (k == length)
		{
			return tall;
		}
	}
}


