#pragma warning(disable:4996)
#include <stdio.h>

int ButtenCheck(int n)
{
    static int mem[45] = { 1, 1, };

    if (n <= 1) return mem[n];
    else if (mem[n] > 0) return mem[n];
    return mem[n] = ButtenCheck(n - 1) + ButtenCheck(n - 2);
}
int main()
{
    int K, A, B;

    scanf("%d", &K);
    printf("%d %d", A = ButtenCheck(K - 2), B = ButtenCheck(K - 1));

    return 0;
}