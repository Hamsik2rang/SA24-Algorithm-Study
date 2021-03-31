#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n = 0;
    scanf("%d", &n);

    for( int i =0; i < n; i++)
    {

        for(int j = 0; j < n - i -1; j++)
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
