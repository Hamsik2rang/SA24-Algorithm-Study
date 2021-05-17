#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000

int main() {
	int num[MAX];
	int i, j, N, k, l, temp = 0;

	scanf("%d", &N);
	for (k = 0; k < N;k++) {
		scanf("%d", &num[k]);
	}

	for (i = 0; i < N - 1; i++)
		for (j = i + 1; j < N; j++)
			if (num[i] > num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}

	for (l = 0; l < N; l++) {
		printf("%d\n", num[l]);
	}

	return 0;
}