#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>

int main() {
    int N, result;
    int a = 0;
    int b = 0;
    scanf("%d", &N);
    while (1) {
        if (N <= 6 * a + 1) {
            result = b + 1;
            break;
        }
        b++;
        a += b;
    }
    printf("%d", result);
}