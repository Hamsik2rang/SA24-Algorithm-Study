#include <stdio.h>

int main()
{
	int a;
	int b = 1;
	int i;

	scanf("%d", &a);

	for (i = 1; a > b; i++)
		b += 6 * i;

	printf("%d", i);

	return 0;
}