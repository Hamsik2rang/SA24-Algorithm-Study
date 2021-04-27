#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main(void)
{
    char arr[1010], i;

    scanf("%s", arr);

    for (int i = 0; arr[i]; i++)
    {
        if (arr[i] >= 71 && arr[i] <= 90)
            arr[i] -= 3;
        else if (arr[i] == 68)
            arr[i] = 'A';
        else if (arr[i] == 69)
            arr[i] = 'B';
        else if (arr[i] == 70)
            arr[i] = 'C';
        else if (arr[i] == 65)
            arr[i] = 'X';
        else if (arr[i] == 66)
            arr[i] = 'Y';
        else if (arr[i] == 67)
            arr[i] = 'Z';
    }
    for (i = 0; i < strlen(arr); i++)

        printf("%c", arr[i]);

    return 0;
}