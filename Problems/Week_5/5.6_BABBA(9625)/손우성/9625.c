#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int BABBA(int a);

int main()
{
	int num;
	int A, B;
	scanf("%d", &num);
	A = BABBA(num - 1);
	B = BABBA(num);
	printf("%d %d", A, B);
}

int BABBA(int a) {
	int result = 0;
	int before = 1, after = 0;

	for (int i = 0; i < a; i++) {
		result = before + after;
		before = after;
		after = result;
	}
	if (a == -1) {
		result = 1;
	}
	return result;
}