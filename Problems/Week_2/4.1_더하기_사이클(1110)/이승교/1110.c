#include <stdio.h>

int main()
{
    int n , m;
    scanf("%d",&n);
    m = n;

    int cnt = 0, a, b, c;

    while(1){
        cnt++;

        a = n / 10;
        b = n % 10;
        c = a + b;

        n = b*10 + c%10;
        if(n==m)break;
    }

    printf("%d",cnt);
    return 0;
}

