#pragma warning(disable:4996)

#include<stdio.h>

int main()
{
    int i, j;
    int count;
    char a[100];

    scanf("%s", &a);

    for (i = 97; i < 123; i++)
    {
        count = 0;

        for (j = 0; j < 100; j++)
        {
            if (a[j] == i)
            {
                count++;
            }
            if (a[j] == '\0')
            {
                break;
            }
        }
        printf("%d ", count);
    }
}