#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char function(char a) {
	return a + 26;
}

void original(char* pw) {

	int len = strlen(pw);

	for (int i = 0; i < len; i++) {
		char origin = *(pw + i) - 3;
		if (origin < 'A')
			origin = function(origin);
		printf("%c", origin);
	}
}

int main() {
	char s1[1001];
	scanf("%s", s1);
	original(s1);
	return 0;
}

//뭔가 자꾸 오류가 걸렸어서 결국 답지보고 이해한 뒤에 올립니다ㅠㅠ