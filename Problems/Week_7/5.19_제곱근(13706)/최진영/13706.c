#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	int start = 0;
	int sqt=0;
	int end;
	scanf("%d", &num);
	end = num;
	while (start < end)
	{
		int mid = (start + end) / 2;
		if (mid == sqrt(num))
		{
			sqt = mid;
		}
		else if (mid > sqrt(num))
		{
			end = mid+1;
		}
		else
		{
			start = mid+1;
		}
	}
	if (num == 1)
	{
		sqt = 1;
	}
	else if (num == 0)
	{
		sqt = 0;
	}
	printf("%d", sqt);
}