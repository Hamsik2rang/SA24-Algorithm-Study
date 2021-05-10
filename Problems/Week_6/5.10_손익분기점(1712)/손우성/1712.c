#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long A, B, C;
	scanf("%lld %lld %lld", &A, &B, &C);

	if (C - B <= 0) {
		printf("-1\n");
	}
	else {
		printf("%lld\n", A / (C - B) + 1);
	}
	return 0;
}