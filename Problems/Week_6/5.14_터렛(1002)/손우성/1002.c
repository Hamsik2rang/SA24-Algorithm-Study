#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int test;
	int x1, y1, r1, x2, y2, r2;
	int k;
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		k = pow(x1 - x2, 2) + pow(y1 - y2, 2);
		if (pow(r1 + r2, 2) > k && k != 0) {
			if (pow(r1 - r2, 2) < k)
				printf("2\n");
			else if (pow(r1 - r2, 2) == k)
				printf("1\n");
			else if (pow(r1 - r2, 2) > k)
				printf("0\n");
		}
		else if (pow(r1 + r2, 2) == k && k != 0) {
			printf("1\n");
		}
		else if (pow(r1 + r2, 2) < k && k != 0) {
			printf("0\n");
		}
		else if (k == 0 && r1 == r2)
			printf("-1\n");
		else if (k == 0 && r1 != r2)
			printf("0\n");
	}
	return 0;
}