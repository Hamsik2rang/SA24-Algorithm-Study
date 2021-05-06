#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count(int a);

int main()
{
	int num;
	int A, B = 0;
	scanf("%d", &num);
	A = count(num-1);
	B = count(num);
	printf("%d %d", A, B);
}

int count(int a)
{
	int cal = 0;
	int before=1, next=0;
	for (int i = 0; i < a; i++)
	{
		cal = before + next;
		before = next;
		next = cal;
	}
	if (a == -1)
	{
		cal = 1;
	}
	return cal;
}