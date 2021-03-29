#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int n, x, input;

	scanf("%d %d", &n, &x);

	for (int i = 0;i < n;i++) {
		scanf("%d", &input);

		if (x > input) {
			printf("%d ", input);
		}
	}

	return 0;
}