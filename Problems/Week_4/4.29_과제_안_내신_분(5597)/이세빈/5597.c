#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int a[30] = { 0, }, i, j, k = 0;

    for (i = 0; i < 28; i++)
    {
        scanf("%d", &j);

        a[j - 1] = 1;
    }
    for (i = 0; i < 30; i++)
    {
        if (a[i] != 1)
        {
            printf("%d\n", i + 1);

            k = k + 1;

            if (k == 2)break;
        }
    }
}