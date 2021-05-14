#include <stdio.h>

int pow(int x, int n)
{
	int res = 1;

	for (int i = 0; i < n; i++)

		res *= x;

	return res;
}

int main()
{
	int size = 0;
	int x1, y1, r1, x2, y2, r2;
	int d;

	scanf("%d", &size);

	for (int i = 0; i < size; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		d = pow(x1 - x2, 2) + pow(y1 - y2, 2);

		if (r1 == r2 && d == 0)

			printf("-1\n");

		else if (pow(r1 - r2, 2) < d && d < pow(r1 + r2, 2))

			printf("2\n");

		else if (pow(r1 - r2, 2) == d || d == pow(r1 + r2, 2))

			printf("1\n");

		else

			printf("0\n");
	}
}