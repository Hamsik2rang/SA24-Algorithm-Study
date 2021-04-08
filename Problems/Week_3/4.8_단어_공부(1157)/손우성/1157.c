#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char arr[1000001];
	int i, j, m = 0;
	int abc[26] = { 0 };
	char c = '?';
	scanf("%s", arr);

	for (i = 0; arr[i] != '\0'; i++) {
		if (arr[i] >= 'a')
			arr[i] -= 32;
		abc[arr[i] - 65]++;
	}

	for (i = 0; i < 26; i++) {
		if (m < abc[i]) {
			m = abc[i];
			c = i;
		}
		else if (m == abc[i]) {
			c = '?';
		}
	}
	if (c != '?') {
		printf("%c", 65 + c);
	}
	else {
		printf("?");
	}
}