#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int t;
	int x1, x2, y1, y2, r1, r2;
	int dist;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		dist = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		if (dist == 0 && r1 == r2)
		{
			printf("-1\n");
		}
		else if (dist == (r1 + r2) * (r1 + r2) || dist == (r1 - r2) * (r1 - r2))
		{
			printf("1\n");
		}
		else if (dist > (r1 - r2) * (r1 - r2) && dist < (r1 + r2) * (r1 + r2))
		{
			printf("2\n");
		}
		else
		{
			printf("0\n");
		}
	}

	return 0;
}