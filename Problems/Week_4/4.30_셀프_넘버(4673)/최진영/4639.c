#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int use(int last);

int use(int last)
{
	int num=1;
	if (last < 10)
	{
		num = last + last;
	}
	else if (last >= 10 && last < 100)
	{
		num = last + last % 10 + last / 10;
	}
	else if (last >= 100 && last < 1000)
	{
		num = last + last / 100 + (last % 100) / 10 + (last % 100) % 10;
	}
	else if (last >= 1000 && last < 10000)
	{
		num = last + last / 1000  + (last % 1000) / 100 + ((last % 1000) % 100)/10 + ((last % 1000) % 100) %10;
	}
	return num;
}

int main(void)
{
	int count;
	int first[10001] = { 0, };
	for (int i = 1;; i++)
	{
		count = use(i);
		first[count] = 1;
		if (count >= 10000)
		{
			break;
		}
	}
	for (int j = 1; ; j++)
	{
		if (first[j] == 0)
		{
			printf("%d\n", j);
			if (j >= 9993)
			{
				break;
			}
		}
	}
	return 0;
}