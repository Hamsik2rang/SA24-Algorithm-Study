#include <stdio.h>

int main()
{
    int N, M;
    int anser;
    printf("N과 M을 순서대로 입력하세요.\n");
    scanf_s("%d %d", &N, &M);
    anser = N * M - 1;
    printf("%d", anser);

    return 0;
}