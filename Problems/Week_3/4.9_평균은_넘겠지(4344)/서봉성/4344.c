#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int c, student, arr[1000];

	scanf("%d", &c);


	for (int i = 0; i < c; i++)
	{
		int count = 0;
		double ave = 0;
		scanf("%d", &student);

		for (int k = 0; k < student; k++)
		{
			scanf("%d", &arr[k]);
			ave += arr[k];
		}

		ave /= student;

		for (int k = 0; k < student; k++)
		{
			if (arr[k] > ave)
				count++;
		}

		ave = (double)count * 100 / (double)student;
		printf("%.3lf%%\n", ave);
	}

	return 0;

}