#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int max_sum = -1002;
	int c_sum = -1001;

	int n, num;
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);

		if (num < c_sum + num) { c_sum = c_sum + num; }
		else { c_sum = num; }

		if (c_sum > max_sum)
		{
			max_sum = c_sum;
		}
	}
	printf("%d", max_sum);

	return 0;
}