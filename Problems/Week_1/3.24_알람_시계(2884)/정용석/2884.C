#include <stdio.h>
#include <stdlib.h>

int main(void)
{   int H;
    int M;
    scanf("%d %d",&H, &M);


    M = M >= 45 ? M - 45 : M + 60 - 45
    H = M >= 15 ? H - 1 : H;
    H = H < 0 ? H + 24 : H;

    printf("%d %d", H, M);





    return 0;
}

