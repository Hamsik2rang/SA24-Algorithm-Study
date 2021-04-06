#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pp = 0;
char q[80];

int main() {
	int times;
	int last = 0;
	int w = 0;

	scanf("%d", &times);
	
	while(w < times){
		scanf("%s", &q);
		for (int i = 0; q[i]; i++) {
			
			if (q[i] == 'O') {
				pp++;
			}
			else if (q[i] == 'X') {
				pp = 0;
			}

			last += pp;
		}
		printf("%d\n", last);

		last = 0;
		pp = 0;

		w++;
	}

	return 0;
}