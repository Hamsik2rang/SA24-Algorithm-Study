#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sec, min, hour, plus;

void time() {
	sec += plus;
	min += sec / 60;
	hour += min / 60;
	sec %= 60;
	min %= 60;
	hour %= 24;
}

int main(){
	scanf("%d %d %d", &hour, &min, &sec);
	scanf("\n%d", &plus);

	time();

	printf("%d %d %d", hour, min, sec);

	return 0;
}