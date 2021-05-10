#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int i, j, input_num, count = 0;
    int x[51] = { 0 };
    int y[51] = { 0 };

    scanf("%d", &input_num);

    for (i = 0; i < input_num; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    for (i = 0; i < input_num; i++)
    {
        count = 1;

        for (j = 0; j < input_num; j++)
        {
            if (x[i] < x[j] && y[i] < y[j])

                count++;
        }
        printf("%d ", count);
    }
}