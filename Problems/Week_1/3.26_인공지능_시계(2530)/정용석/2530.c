#include <stdio.h>
#include <stdlib.h>

int main()
{   int a;
    int b;
    int c;
    int d;
    scanf("%d %d %d\n", &a, &b, &c);
    scanf("%d", &d);

    c += d % 60;
    d /= 60;
    c >= 60 ?  c %= 60, b += 1 : 0;
    b += d % 60;
    b >= 60 ? b %= 60, a += 1 : 0;
    d /= 60;
    a += d % 24;
    a >= 24 ? a %= 24 : 0;



    printf("%d %d %d", a, b, c);

    return 0;
}
