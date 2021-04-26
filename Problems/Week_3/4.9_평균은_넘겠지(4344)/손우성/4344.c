#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int tc, student, over = 0;
	int grade[1000] = { 0, };
	float percent[1000] = { 0, }, everage = 0;
	scanf("%d", &tc);
	for (int v = 0; v < tc; v++) {
		scanf("%d", &student);
		for (int k = 0; k < student; k++) {
			scanf("%d", &grade[k]);
			everage = everage + grade[k];
		}
		everage = everage / student;
		for (int l = 0; l < student; l++) {
			if (grade[l] > everage) {
				over += 1;
			}
		}
		percent[v] = ((float)over / (float)student) * 100;
		everage = 0;
		over = 0;
	}
	for (int i = 0; i < tc; i++) {
		printf("%.3f%%\n", percent[i]);
	}
}