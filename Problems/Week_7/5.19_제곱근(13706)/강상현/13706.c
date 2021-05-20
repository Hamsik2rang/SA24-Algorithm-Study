#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 800

int main() {
	char N[max];
	int answer = 2, num = 0, len = 0 , i, k, j, a;

	scanf("%s", N, max);

	for (a = 0; a < max; a++) {
		if (N[a] != '\0') {
			len++;
		}
		else {
			break;
		}
	}

	for (j = 0; j < max; j++) {
		if (N[j] != '\0') {
			num += (N[j] - 48);
			num *= 10;
			if (len >= 13) {
				
			}
		}
		else {
			break;
		}
	}

	num /= 10;

	for (i = 0; i < num; i++) {
		if (num == answer * answer) {
			printf("%d", answer);
			break;
		}
		else
			answer++;
	}

	return 0;
}