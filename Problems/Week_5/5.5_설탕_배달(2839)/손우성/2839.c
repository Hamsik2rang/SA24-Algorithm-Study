#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0;
	int result = 0;

	scanf("%d", &a);

	result = a / 5;

	if (a % 5 != 0) {
		for (; result >= 0; result--) {
			if ((a - 5 * result) % 3 == 0) {
				result += (a - 5 * result) / 3;
				break;
			}
		}
	}
	printf("%d", result);
	return 0;
}